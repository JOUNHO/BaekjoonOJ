#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin >>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin >> v[i];
  }
  int result=0;
  int m=0;
  sort(v.begin(),v.end());
  do {
    for(int i=1;i<n;i++){
      result +=abs(v[i-1]-v[i]);
    }
    m=max(m,result);
    result=0;
  } while(next_permutation(v.begin(),v.end()));
  
  cout<< m << endl;
}