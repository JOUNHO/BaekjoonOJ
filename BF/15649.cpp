#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;


bool c[10];
int a[10];

void check(int index,int n, int m){
  if(index ==m){
    for(int i=0; i<m; i++){
      if(i !=m-1){
        cout<< a[i]<<" ";
      }else{
        cout<<a[i]<< '\n';
      }
    }
    return ;
  }
  for(int i=1;i<n+1;i++){
    if(c[i]){
      continue;
    }
    c[i]=true;
    a[index] = i;
    check(index+1,n,m);
    c[i]=false;
  }
}
int main(){
  int n,m;
  cin >>n>>m;
  check(0,n,m);

}