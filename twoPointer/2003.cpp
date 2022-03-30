#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n=0;
  int m=0;
  vector<int> v;

  cin >>n >>m;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    v.push_back(a); 
  }
  
  int i=0;
  int j=0;
  int sum=0;
  int answer=0;
  while(i<n && j<n){
    for(int tempI=i;tempI<=j;tempI++){
      sum+=v[tempI];
    }
    if(sum<m){
      j++;
    }else if(sum==m){
      answer++;
      i++;
    }else{
      i++;
    }
    sum=0;
  }
  cout<<answer;
  
}