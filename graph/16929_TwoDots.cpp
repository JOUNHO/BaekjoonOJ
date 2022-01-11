#include<iostream>
using namespace std;

int n,m;
char a[51][51];
int check[51][51];
int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};
int result=0;

void dfs(int x,int y,int cnt){
  check[x][y] =cnt;
  for(int i=0;i<4;i++){
    int nextX = x+dx[i];
    int nextY = y+dy[i];
    if(nextX >=0 && nextY >=0 && nextX <n && nextY<m){
      if(a[x][y] ==a[nextX][nextY]){
        if(check[nextX][nextY] !=0){
          if((cnt+1)-check[nextX][nextY] >=4){
            result=1;
          }
        }else{
          dfs(nextX,nextY,cnt+1);
        }
        
      }
    }
  }
}

int main(){
  cin >>n>>m;
  
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >>a[i][j];
    }
  }
  
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(check[i][j] ==0){
        dfs(i,j,1);
      }
    }
  }
  if(result==1){
    cout<<"Yes"<<"\n";
  }else{
    cout <<"No"<<"\n";
  }
}