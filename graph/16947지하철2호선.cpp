#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include <cstring>
using namespace std;


vector<int> a[3001];
vector<int> temp;
queue<int> q;
int check[3001];
bool check2[3001]; 
bool c[3001];
bool cycle;
int n;
int first;
int cnt=0;



int bfs(){
  while(!q.empty()){
    int x = q.front(); q.pop();  
    for(int i=0;i<a[x].size();i++){
      int y= a[x][i];
      if(check2[y]==false){
        check2[y]=true;
        temp.push_back(y);
      }
    }
  }
  for(int i=0;i<temp.size();i++){
    if(c[temp[i]]){
      return cnt+1;
    }else{
      q.push(temp[i]);
    }
  }
  temp.clear();
  cnt++;
  return bfs();
  
}

void dfs(int x,int cnt){
    check[x] = cnt;
  for(int i=0;i<a[x].size();i++){
    int y= a[x][i];
    if(check[y]==0){
      dfs(y,cnt+1);
    }else if(check[y]!=0 && (check[x]-check[y])>1){
      cycle=true;
      first=y;
      c[x]=true;
      return ;
    }
    
    if(cycle){
      c[x]=true;
      if(x==first){
        cycle=false;
      }
      break;
    }
  }
}
int main(){
  
  int x,y;
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>x>>y;
      a[x].push_back(y);
      a[y].push_back(x);
  }
  dfs(1,1);

  for(int i=1;i<=n;i++){
    if(c[i]){
      cout<<"0 ";
    }else{
      q.push(i);
      check2[i]=true;
      cout << bfs()<<" ";
    }
    cnt=0;
    while(!q.empty())   q.pop();
    temp.clear();
    memset(check2,0,sizeof(check2));
  }

}