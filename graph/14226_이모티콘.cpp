#include<iostream>
#include<queue>
using namespace std;

int s;
bool check[10001][10001];
queue<pair<int,int>> q;
int answer[10001][10001];
void bfs(int x,int y){
  q.push(make_pair(x,y));
  check[x][y] = true;

  while(!q.empty()){
    x = q.front().first;
    y = q.front().second;
    q.pop();

    for(int i=0; i<3; i++){
      int nextX = x;
      int nextY = y;
      if(i == 0){
        nextY = x;
      }else if(i == 1){
        if(y == 0){
          continue;
        }
        nextX = y + x;
      }else if(i == 2){
        if(x <=0){
          continue;
        }
        nextX = x - 1;
      }
      if(check[nextX][nextY] == false){
        check[nextX][nextY] = true;
        answer[nextX][nextY]= answer[x][y]+1;
        if(nextX == s){
          cout <<answer[nextX][nextY] << endl;
          return ;
        }
        q.push(make_pair(nextX,nextY));
      }
      
    }
  }
}
// pair(a,b) a: 화면 b : 클립보드
int main(){
  cin >> s;

  bfs(1,0);
  return 0;
}