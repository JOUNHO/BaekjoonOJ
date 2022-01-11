#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int a[101][101];
bool check[101][101];
bool check2[101][101];
int d[101][101] = {-1,};
queue<pair<int,int>> q;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int n;

void checkNum(int x,int y,int cnt){
  check[x][y] =true;
  a[x][y]=cnt;
  q.push(make_pair(x,y));
  while(!q.empty()){
    x = q.front().first;
    y = q.front().second;
    q.pop();
    for(int i=0;i<4;i++){
      int nextX = x+dx[i];
      int nextY = y+dy[i];
      if(nextX>=0 && nextY>=0 && nextX<n &&nextY<n){
        if(check[nextX][nextY]==false && a[nextX][nextY]==1){
          a[nextX][nextY] = cnt;
          q.push(make_pair(nextX,nextY));
          check[nextX][nextY] = true;
        }
      }
    }
  }


}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> a[i][j];
      if(a[i][j]==1){
        d[i][j]=0;
      }else{
        d[i][j]=-1;
      }
    }
  }
  int cnt=1;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(check[i][j]==false && a[i][j]==1){
        checkNum(i,j,cnt);
        cnt++;
      }
    }
  }
 int answer=-1;
 int sw=0;
  while(1){
    sw=0;
    for(int l=1;l<cnt;l++){
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(a[i][j]==l && check2[i][j]==false){
          check2[i][j]=true;
          q.push(make_pair(i,j));
        }
      }
    }

    while(!q.empty()){
      int x = q.front().first;
      int y = q.front().second;
      q.pop();
      for(int i=0;i<4;i++){
         int nextX = x+dx[i];
         int nextY = y+dy[i];
         if(nextX>=0 && nextY>=0 && nextX<n &&nextY<n){
           if(d[nextX][nextY]==-1){
             d[nextX][nextY] = d[x][y]+1;
             a[nextX][nextY] = l;
           }
           for(int k=0;k<4;k++){
             int nextXX = nextX+dx[i];
             int nextYY = nextY+dy[i];
              if(nextXX>=0 && nextYY>=0 && nextXX<n &&nextYY<n){
                if(a[nextXX][nextYY]!=l && d[nextXX][nextYY]!=-1){
                  if(answer ==-1 || answer > (d[nextX][nextY]+d[nextXX][nextYY])){
                    answer = d[nextX][nextY]+d[nextXX][nextYY];
                    if(answer ==1){
                      cout<<l<<endl;
                      cout <<nextX<<nextY<<endl;
                      cout<<nextXX<<nextYY<<endl;
                    }
                  }
                  
                }
              }
           }
         }
      }
    }
  }
  for(int p=0;p<n;p++){
    for(int q=0;q<n;q++){
      if(d[p][q]==-1){
        sw = 1;
      }
    }
  }
  if(sw ==0){
    break;
  }
  }
  cout <<answer <<endl;
                  return 0;
}