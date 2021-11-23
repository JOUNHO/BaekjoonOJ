#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin >>n;
  int a[n][n];
  vector<int> v(n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> a[i][j] ;
    }
  }
  for(int i=0;i<n;i++){
    v[i]=i;
  }
  int result;
  int minValue;
  bool first=true;
  bool outerLoop = false;
  do
  {
    for(int i=0; i<n;i++){
      if((i+1!=n&&a[v[i]][v[i+1]]==0)|| (i!=0&&a[v[i]][v[0]]==0)){
        outerLoop =true;
        break;
      }
      if(i+1!=n){
        result += a[v[i]][v[i+1]];
      }else{
        result += a[v[i]][v[0]];
      }
    }
    if(!outerLoop){
      if(first){
      minValue =result;
      first=false;
    }
    minValue = min(result,minValue);
    result=0;
    }
    outerLoop=false;
    result=0;
  } while (next_permutation(v.begin(),v.end()));
    cout <<minValue <<endl;
}