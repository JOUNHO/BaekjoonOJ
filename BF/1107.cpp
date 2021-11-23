#include<iostream>
#include<algorithm>
using namespace std;


bool arr[10]={false};

bool check(int num){
  if(num==0){
    if(arr[0]==true){
      return false;
    }
    else {
      return true;
    }
  }
  while(num>0){
    if(arr[num%10] == true) return false;
    num=num/10;
  }
  return true;
}

int main(){
  int n,brokenNum,broken;
  int answer;
  cin>>n>>brokenNum;
  for(int i=0;i<brokenNum;i++){
    cin >> broken;
    arr[broken] = true;
  }
  answer = abs(n-100);
  for(int i=0;i<1000000;i++){
    int result;
    if(check(i)) {
      int len= to_string(i).length();
      if(i>n){
        result=i-n+len;
      }else {
        result=n-i+len;
      }
      answer = min(result,answer);
    }
  }

  cout<<answer<<endl;
}