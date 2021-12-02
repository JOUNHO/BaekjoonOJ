#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;


int n,m;
int a[101][101];
int answer[101][101];
bool check[101][101];
queue<pair<int,int>> q;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};
int cnt=0;

void bfs(int x,int y){
  q.push(make_pair(x,y));
  check[x][y] = true;

  while(!q.empty()){
    x = q.front().first;
    y = q.front().second;
    q.pop();
    for(int i=0;i<4;i++){
      int rx = x+dx[i];
      int ry = y+dy[i];
      if(rx>=0 && ry >=0 && rx <n && ry<m){
        if(a[rx][ry] ==1 && check[rx][ry] ==false){
          answer[rx][ry]=answer[x][y]+1;
          q.push(make_pair(rx,ry));
          check[rx][ry]=true;
        }
      }
    }
  }
}
int main(){
  cin >>n >>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%1d",&a[i][j]);    
    }
  }
  bfs(0,0);
  cout <<answer[n-1][m-1]+1;

}