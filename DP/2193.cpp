#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  long long *dp = new long long[n+1];
  dp[1]=1;
  dp[2]=1;

  for(int i=3;i<n+1;i++){
    for(int j=1;j<i-1;j++){
      dp[i]+=dp[j];
    }
    dp[i]=dp[i]+1;
  }

  cout<<dp[n];
}