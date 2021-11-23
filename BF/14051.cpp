#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> t(21);
vector<int> p(21);
int n;
int result=0;
void go(int index, int value){
  if(index == n){
    result = max(result,value);
    return ;
  }else if(index >n){
    return ;
  }


  go(index+t[index],value+p[index]);
  go(index+1,value);
}


int main(){
  cin >>n;
  for(int i=0;i<n;i++){
    cin >> t[i] >> p[i];
  }
  
  go(0,0);
  cout<<result<< endl;
}