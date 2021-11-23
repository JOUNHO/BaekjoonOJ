#include<iostream>
#include<algorithm>
using namespace std;

int n;
char c;
int sign[10][10]; 
int ans[10];
bool first=false;
bool check(int index,int value){
  int result=0;
  for(int i=0;i<=index;i++){
    for(int j=i;j<index;j++){
      result+=ans[j];
    }
    result+=value;
    
    if(sign[i][index]>0){
      if(result<=0) return false;
    } else if(sign[i][index]<0){
      if(result>=0) return false;
    } else if(sign[i][index]==0){
      if(result!=0) return false;
    }
    result=0;
  }
  return true;
  
}
void go(int index){
  if(first ==true){
    return;
  }
  if(index ==n){
    for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";
   }
   first=true;
    return ;
  }

  if(sign[index][index]==0){
    ans[index]=0;
    go(index+1);
  }
  for(int i=1;i<=10;i++){
    if(check(index,(sign[index][index]*i))){
      ans[index] = sign[index][index]*i;
      go(index+1);
      
    }
  }
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      cin >>c;
      if(c =='-'){
        sign[i][j]=-1;
      } else if(c =='+'){
        sign[i][j]=+1;
      }else {
        sign[i][j]=0;
      }
    }
  }
  
  go(0);

}