#include<iostream>
#include<queue>
using namespace std;


int n,k;
bool check[100001];
queue<int> q;
int dist[100001];

void bfs(int x){
  q.push(x);
  check[x]=true;
  dist[x]=0;
  while(!q.empty()){
    x = q.front();
    
    q.pop(); 
    int nextX;
    for(int i=0;i<3;i++){
      if(i == 0 ){
        nextX = x+1;       
      }else if(i == 1){
        nextX=x-1;       
      }else if(i == 2){
        nextX = 2*x;
      }
      if(nextX <0 || nextX > 100000) continue;
      if(check[nextX]==false){
        q.push(nextX);
        check[nextX] = true;
        dist[nextX] = dist[x]+1;
      }
    }
  }
}
int main(){
  cin >>n>>k;


  bfs(n);
  cout <<dist[k]<<endl;
}