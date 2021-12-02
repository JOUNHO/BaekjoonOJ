#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int a[1001][1001];
int check[1001][1001];
int m,n;
int answer=0;
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};
vector<pair<int,int>> v;
queue<pair<int,int>> q;

void bfs(){
  while(!q.empty()){
    int x=q.front().first;
    int y=q.front().second;
    q.pop();

    for(int i=0;i<4;i++){
      int newX=x+dx[i];
      int newY=y+dy[i];
      if(newX>=0 && newY>=0 && newX<n && newY<m){
        if(a[newX][newY]==0){
          a[newX][newY]=1;
          v.push_back(make_pair(newX,newY));
        }
      }
    }
  }
  
  for(int i=0;i<v.size();i++){
    q.push(v[i]);
  }
  if(v.size()>0){
     answer++;
     v.clear();
     bfs();
  }
  
  
}

int main(){
  cin >>m>>n;

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> a[i][j];
      if(a[i][j]==1){
        q.push(make_pair(i,j));
      }
    }
  }

  
  bfs();
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(a[i][j]==0){
        cout <<-1;
        return 0;
      }
    }
  }
  cout<<answer;
}