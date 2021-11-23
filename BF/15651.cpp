#include<iostream>
using namespace std;

int a[10];

void go(int index,int n,int m){
  if(index == m){
    for(int i=0;i<m;i++){
      if(i !=m-1){
        cout<<a[i]<<" ";
      }else {
        cout<<a[i]<<'\n';
      }
    }
    return ;
  }

  for(int i=1;i<n+1;i++){
    a[index] = i;
    go(index+1,n,m);
  }
}

int main(){
  int n,m;
  cin>>n>>m;
  go(0,n,m);
}