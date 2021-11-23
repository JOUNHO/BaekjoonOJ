#include<iostream>
using namespace std;

int a[10];

void check(int index, int next ,int n, int m){
  if(index == m){
    for(int i=0;i<m;i++){
      if(i!=m-1){
        cout << a[i] << " ";
      }else {
        cout << a[i] << "\n";
      }
    }
  }
    for(int i=next;i<n+1;i++){
          a[index]=i;
          check(index+1,i+1,n,m);
      }
  }

int main(){
  int n,m;
  cin>>n>>m;
  check(0,1,n,m);
}