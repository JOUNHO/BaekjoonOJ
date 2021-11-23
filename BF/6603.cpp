#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  int k;


  while((cin >> k) && k!=0){
    vector<int> v(k);
    vector<int> a(k);
    for(int i=0;i<k;i++){
      if(i>=6){
        v[i]=0;
      }else {
        v[i]=1;
      }
    }
    for(int i=0;i<k;i++){
      cin >>a[i];
    }

    do{
      int count=0;
      for(int i=0;i<k;i++){
        if(v[i]==1){
          count++;
          if(count==6){
            cout <<a[i];
          }else{
            cout <<a[i] << " ";
          } 
          
        }
      }
      cout<<'\n';
    }while(prev_permutation(v.begin(),v.end()));
    cout<<'\n';
  }
  
}