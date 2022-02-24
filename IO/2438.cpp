#include <iostream>
using namespace std;

int main(void){
  int n;
  cin >>n;

  for(int i=1; i<n+1;i++){
    for(int j=0;j<n;j++){
      if(n-j<=i){
        cout<<"*";
      }else{
        cout<<" ";
      }
    }
    cout <<endl;
  }
}