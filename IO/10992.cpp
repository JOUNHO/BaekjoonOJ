#include<iostream>
using namespace std;

int main(){
  int n;
  int num;
  bool sw;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=2*n-1;j++){
      if(j>n){
        num=2*n%j;
        sw=true;
      }else{
        num=j;
        if(i==1){
          sw=true;
        }
      }
      if(!(i==n)){
        if((n-i+1)==num){
        cout<<"*";
        if(sw){
          break;
        }
        }else{
          cout<<" ";
        }
      }else{
        cout<<"*";
      }
      
    }
    cout<<endl;
    sw=false;
  }
}