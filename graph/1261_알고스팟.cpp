#include<iostream>
#include<deque>
#include<cstdio>
using namespace std;

int n,m;
bool check[101][101];
int answer[101][101];
int a[101][101];
deque<pair<int,int>> dq;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

void bfs(){
  while(!dq.empty()){
    int x = dq.front().first;
    int y = dq.front().second;
    dq.pop_front();

    for(int i=0; i<4;i++){
      int nextX = x + dx[i];
      int nextY = y + dy[i];

      if(nextX < n && nextX >= 0 && nextY >= 0 && nextY < m){
        if (check[nextX][nextY] == false){
          check[nextX][nextY] = true;
          if (a[nextX][nextY] == 0){
            dq.push_front(make_pair(nextX, nextY));
            answer[nextX][nextY] = answer[x][y];
          }
          else{
            dq.push_back(make_pair(nextX, nextY));
            answer[nextX][nextY] = answer[x][y]+1;
          }
        }
      }
    }
  }
}

int main(){
  cin >>m>>n;

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%1d", &a[i][j]);
    }
  }

  dq.push_front(make_pair(0,0));
  check[0][0]=true;
  bfs();
  cout << answer[n-1][m-1]<<endl;
  return 0;
}