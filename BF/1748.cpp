#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
  long long n;
  cin >>n;
  string s = to_string(n);
  int ans =0;
  for(int i=0; i<s.length()-1; i++){
    ans += 9*pow(10,i)*(i+1);
  }
  int plus = n-pow(10,s.length()-1)+1;
  plus = plus * s.length();
  ans = ans+plus;
  cout<<ans<<endl;
}