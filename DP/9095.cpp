#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int T,n;
  cin>>T;

  for(int i=0;i<T;i++){
    cin >> n;
    int **arr=new int*[3];
    int **dp= new int*[3];
    for(int j=0;j<3;j++){
      arr[j] = new int[n+1];
      dp[j] = new int[n+1];
    }

    for(int k=1;k<3;k++){
      for(int u=1;u<n+1;u++){
        cin >> arr[k][u];
      }
    }
    dp[1][1]=arr[1][1];
    dp[2][1]=arr[2][1];
    dp[1][2]=arr[1][2]+dp[2][1];
    dp[2][2]=arr[2][2]+dp[1][1];
    for(int r=3;r<n+1;r++){
      dp[1][r]=arr[1][r] + max(dp[2][r-2],dp[2][r-1]);
      dp[2][r]=arr[2][r] + max(dp[1][r-2],dp[1][r-1]);
    }
    cout<<max(dp[1][n],dp[2][n])<<endl;
  }
}