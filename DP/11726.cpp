#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int *dp=new int[n+1];
  cout<<dp[5]<<endl;
  dp[1]=1;
  dp[2]=2;
  for(int i=3;i<n+1;i++){
    dp[i]=dp[i-2]+dp[i-1];
    dp[i]=dp[i]%10007;
  }
  cout<<dp[n]<<endl;
}