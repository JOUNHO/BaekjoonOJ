#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int check(vector<string> &a){
  int n =a.size();
  int answer=0;
  for(int i=0;i<n;i++){
    int cnt=1;
    int cnt2=1;
    for(int j=0;j<n-1;j++){
      if(a[i][j]==a[i][j+1]){
        cnt++;
      }else{
        cnt=1;
      }
      if(a[j][i]==a[j+1][i]){
        cnt2++;
      }else{
        cnt2=1;
      }
      answer=max(answer,cnt);
      answer=max(answer,cnt2);
    }

  }
  return answer;
}

int main(){
  int n;
  cin>>n;
  vector<string> a(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
  }

  int result=0;
  for(int i=0;i<n;i++){
    
    for(int j=0;j<n;j++){
      int temp1,temp2;
      if(j<n-1){
        swap(a[i][j],a[i][j+1]);
        temp1=check(a);
        swap(a[i][j],a[i][j+1]);
      }
      
      if(i<n-1){
        swap(a[i][j],a[i+1][j]);
        temp2=check(a);
        swap(a[i][j],a[i+1][j]);
      }
      result=max(result,temp1);
      result=max(result,temp2);
    }
  }
  cout<<result<<endl;
}