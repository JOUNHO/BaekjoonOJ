#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;


bool check[25*25];
int a[25][25];
int d[25][25];
int n;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int ans[25*25];

void dfs(int x,int y, int cnt){
  d[x][y] = cnt;
  for(int k=0;k<4;k++){
    int nx = x+dx[k];
    int ny = y+dy[k];
    if(0<=nx && 0<=ny && nx<n && ny<n){
      if(a[nx][ny] ==1 && d[nx][ny]==0)
      dfs(nx,ny,cnt);
    }
  }
}
int main(){
  cin >>n;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      scanf("%1d",&a[i][j]);
    }
  }
  int cnt =0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(a[i][j] == 1 && d[i][j] ==0){
          dfs(i,j, ++cnt);
      }
    }
  }

  cout<<cnt<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      ans[d[i][j]]+=1;
    }
  }
  sort(ans+1,ans+cnt+1);
  for(int i=1;i<=cnt;i++){
    cout << ans[i]<<endl;
  }
}