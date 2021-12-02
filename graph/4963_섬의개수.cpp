#include<iostream>
#include<algorithm>
#include <cstring>
using namespace std;



int w,h;
int a[51][51];
int temp[51][51];
int cnt=0;
int dx[] = {-1,1,0,0,-1,1,-1,1};
int dy[] = {0,0,1,-1,1,1,-1,-1};
int ans[51*51];
void dfs(int x,int y,int cnt){
  temp[x][y] = cnt;

  for(int i=0;i<8;i++){
    int nx = x+dx[i];
    int ny = y+dy[i];
    if(nx>=0 && ny>=0 && nx < h &&ny <w ){
      if(a[nx][ny] == 1 && temp[nx][ny] == 0){
        dfs(nx,ny,cnt);
      }
     
    }
  }
}

int main(){

  while(true){
    cin >>w>>h;
    
    if(w==0 && h ==0){
      break;
    }

    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        cin >> a[i][j];
      }
    }
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        if(temp[i][j]==0 && a[i][j]==1){
          cnt++;
          dfs(i,j,cnt);
        }    
      }
    }

    cout<<cnt<<endl;
    memset(a,0,sizeof(a));
    memset(temp,0,sizeof(temp));
    memset(ans,0,sizeof(ans));
    cnt=0;
  }
}