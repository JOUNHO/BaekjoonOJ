#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int n;
int a[20][20];
int cnt1=0;
int cnt2=0;
int first[10];
int second[10];
int firstSum=0;
int secondSum=0;
int ans =100;
int main(){
  cin >>n;
  vector<int> v(n);

  for(int i=0;i<n;i++){
    if(i<=(n/2-1)){
      v[i]=0;
    }else{
      v[i]=1;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> a[i][j];
    }
  }
  do{
    cnt1=0; cnt2=0;
    firstSum=0; secondSum=0;
    for(int i=0;i<n;i++){
      if(v[i]==0){
        first[cnt1++] = i;
      }else{
        second[cnt2++] = i;
      }
    }
    for(int i=0;i<n/2;i++){
      for(int j=0;j<n/2;j++){
        firstSum+=a[first[i]][first[j]];
        secondSum+=a[second[i]][second[j]];
      }
    }

    ans=min(ans,abs(firstSum-secondSum));
  }while(next_permutation(v.begin(),v.end()));
  cout << ans <<endl;
}