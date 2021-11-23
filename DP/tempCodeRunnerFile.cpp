#include<iostream>
using namespace std;

int dp[91][2];
int main(){
  int n;
  cin>>n;

  dp[1][1]=1;

  for(int i=2;i<n+1;i++){
    for(int j=0;j<2;j++){
      if(j==0){
        dp[i][j]=dp[i-1][0]+dp[i-1][1];
      }else{
        dp[i][j]=dp[i-1][0];
      }
    }
  }
  int result=dp[n][0]+dp[n][1];
  cout<<result<<endl;
}