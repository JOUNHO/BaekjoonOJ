#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;


int k;
vector<char> a(10);
int result1=0, result2=999999999;
vector<string> ans;
int check[10];

void go(int index,string s){
  if(index ==k+1){
    ans.push_back(s);
    return ;
  }
  for(int i=0;i<10;i++){
    if(check[i]) continue;
    if(index>=1){
      if(a[index-1] == '>'){
        if(((int)s[index-1]-'0' > i)){
          check[i]=true;
          go(index+1,s+to_string(i));
          check[i]=false;
        }else {
          continue;
        }
      }else if(a[index-1] == '<'){
        if(((int)s[index-1]-'0' < i)){
          check[i]=true;
          go(index+1,s+to_string(i));
          check[i]=false;
        }else {
          continue;
        }
      }
    }else if(index ==0){
      check[i]=true;
      go(index+1,s+to_string(i));
      check[i]=false;
    }
    
  }
}
int main(){
  cin >>k;
  for(int i=0;i<k;i++){
    cin >>a[i];
  }
  go(0,"");
  cout<<ans[ans.size()-1]<<endl;
  cout<<ans[0]<<endl;
}