#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;


vector<int> a[1001];
bool visit[1001];
bool visit2[1001];
queue<int> q;

void dfs(int x){
  cout << x <<" ";
  visit[x]= true;
  for(int i=0;i<a[x].size();i++){
    int y=a[x][i];
    if(visit[y]==false){
      dfs(y);
    }
  }
}

void bfs(int start){
  visit2[start]=true;
  q.push(start);
  while(!q.empty()){
    int x=q.front(); 
    cout << x <<" ";
    q.pop();
    for(int i=0;i<a[x].size();i++){
      int y=a[x][i];
      if(visit2[y]==false){
        visit2[y]=true;
        
        q.push(y);
    }
    }
    

  }
}


int main(){
  int n,m,v;
  cin >>n>>m>>v;

  int x,y;
  for(int i=0;i<m;i++){
    cin >> x >> y;
    a[x].push_back(y);
    a[y].push_back(x);
  }

  for(int i=0;i<=n;i++){
       sort(a[i].begin(),a[i].end());
    }

  dfs(v);
  cout<<endl;
  bfs(v);
}