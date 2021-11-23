#include<iostream>
using namespace std;

int a[10];
void go(int value,int selectNum,int n,int m){
  if(selectNum ==m){
    for(int i=0;i<m;i++){
      if(i !=m-1){
        cout << a[i] << " ";
      }else {
        cout <<a[i]<<'\n';
      }
    }
    return ;
  }
  a[selectNum] = value;
  go(value,selectNum+1,n,m);
  a[selectNum] = 0;
  if(value==n) {return ;}
  go(value+1,selectNum,n,m);
  
}
int main(){
  int n,m;
  cin >>n>>m;

  go(1,0,n,m);
}