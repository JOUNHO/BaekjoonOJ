#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;


int n,k;
int check[100001];
int from[100001];
queue<int> q;
int dist[100001];
vector<int> v;

void bfs(int x){
  q.push(x);
  check[x] = true;

  while(!q.empty()){
    x = q.front();
    q.pop();
    int nextX;
    for(int i=0;i<3;i++){
      if(i == 0){
        nextX = x+1;
      }else if(i == 1){
        nextX = x-1;
      }else{
        nextX = 2*x;
      }
      if(nextX <0 || nextX >100000) continue;
      if(check[nextX] == false){
        check[nextX] = true;
        from[nextX] = x;
        dist[nextX] = dist[x] + 1;
        q.push(nextX);
      }
    }
  }
}

int main(){
  cin >> n >> k;

  bfs(n);
  cout << dist[k] << endl;
  for(int i=k; i!=n; i=from[i]){
    v.push_back(i);
  }
  v.push_back(n);
  reverse(v.begin(),v.end());
  for(int i=0;i<v.size();i++){
    cout << v[i] << " ";
  }
}