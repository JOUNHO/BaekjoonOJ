#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int t;
  int m,n;
  int x,y;

  cin>>t;
  for(int i=0;i<t;i++){
    int result=0;
    cin >>m>>n>>x>>y;
    x=x-1; y=y-1;
    for(int j=0;j<n;j++){
      if(x%n == y){
        result=x;
      }else{
        x=x+m;
      }
    }
    if(result==0){
      result =-2;
    }
    cout<<result+1<<endl;
  }

}