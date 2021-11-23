#include<iostream>
#include<vector>
using namespace std;

vector<int> g[2000];
int main(){
  int n,m;
  int from,to;
  cin>>n>>m;

  for(int i=0;i<m;i++){
    cin >>from>>to;
    g[from].push_back(to);
    g[to].push_back(from);
  }
  m=m*2;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      int A = g[i][]
    }
  }
}