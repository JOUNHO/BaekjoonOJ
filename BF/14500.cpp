#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n,m;
  cin >>n>>m;
  int a[500][500];

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> a[i][j];
    }
  }
  int ans= 0 ;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){

      if(j+3 < m){
        int temp = a[i][j]+a[i][j+1]+a[i][j+2]+a[i][j+3];
        ans = max(ans,temp);
      }
      if(j+3 < n){
        int temp = a[i][j]+a[i+1][j]+a[i+2][j]+a[i+3][j];
        ans = max(ans,temp);
      }
    }
  }
}