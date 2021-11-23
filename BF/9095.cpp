#include<iostream>
#include<vector>
using namespace std;

int result;
int go(int count,int sum,int goal){
  if(sum>goal){
    return 0;
  }
  if(sum==goal){
    result++;
    return 1;
  }
  for(int i=1;i<4;i++){
    go(count+1,sum+i,goal);
  }
  return result;
}

int main(){
  int t,n;

  cin >>t;
  for(int i=0;i<t;i++){
    cin >>n;
    result=0;
    cout << go(0,0,n)<<'\n';
  }
}