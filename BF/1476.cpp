#include<iostream>
using namespace std;

int main(){
  int e,s,m;
  cin >>e>>s>>m;
  int year=1;
  while(1){
    int E=year%15;
    int S=year%28;
    int M=year%19;
    if(E==0) E=15;
    if(S==0) S=28;
    if(M==0) M=19;
    if(E==e && S==s && M==m){
      break;
    }
    year++;
  }
  cout<<year<<endl;
}