#include<iostream>
#include <algorithm>
using namespace std;

int main(){
  int sum=0,n;
  bool outerLoop=false;
  int *arr=new int[9];
  for(int i=0;i<9;i++){
    cin >>n;
    arr[i]=n;
    sum+=n;
  }
  for(int i=0;i<9;i++){
    for(int j=i+1;j<9;j++){
      int result=arr[i]+arr[j];
      if(sum-100 == result){
        arr[i]=0;arr[j]=0;
        outerLoop =true;
        break;
      }
    }
    if(outerLoop==true) break;
  }
  sort(arr,arr+9);
  for(int i=0;i<9;i++){
    if(arr[i]!=0){
      cout<<arr[i]<<endl;
    }
  }
}