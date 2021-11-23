#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;


int main(){
  int l,c;
  cin >>l>>c;
  vector<string> v(c);
  vector<int > a(c);
  for(int i=0;i<c;i++){
    if(i>=l){
      a[i]=1;
    }else {
      a[i]=0;
    }
  }
  for(int i=0;i<c;i++){
    cin >> v[i];
  }
  sort(v.begin(),v.end());
  
  do{
    int mo=0,ja=0;
    for(int i=0;i<c;i++){
      if(a[i]==0){
        if(v[i]=="a"||v[i]=="e"||v[i]=="i"||v[i]=="o"||v[i]=="u"){
          mo++;
        }else {
          ja++;
        }
      }
    }
    if(mo>=1&&ja>=2){
      for(int i=0;i<c;i++){
        if(a[i]==0){
          cout <<v[i];
        }
      }
      cout <<'\n';
    }
    
  }while(next_permutation(a.begin(),a.end()));
}