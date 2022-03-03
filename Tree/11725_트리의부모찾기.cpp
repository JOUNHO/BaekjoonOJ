#include<iostream>
#include<queue>
#include<vector>
#include <cstdio>
using namespace std;

int n;
vector<int> v[100001];
bool check[100001];
int parent[100001];
queue<int> q;

void bfs(int x){
  check[x] = true;
  q.push(x);

  while(!q.empty()){
    x = q.front();
    q.pop();
    for(int nextX : v[x]){
      if (check[nextX] == false){
        parent[nextX] = x;
        check[nextX] = true;
        q.push(nextX);
      }
    }
  }
}

int main(){
  cin >>n;

  for(int i=1; i<n;i++){
    int x,y;
    cin >>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
  }

  bfs(1);

  for(int i=2; i<=n;i++){
    printf("%d\n",parent[i]);
  }
  return 0;
}