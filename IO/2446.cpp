#include<iostream>
using namespace std;

int main(){
  int n;
  int num;
  cin>>n;
  for(int i=1;i<=2*n-1;i++){
    if(i>n){
      num = 2*n%i;
    }else{
      num=i;
    }
    for(int j=0;j<num-1;j++){
      cout<<" ";
    }
    for(int j=0;j<2*(n-num)+1;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}
