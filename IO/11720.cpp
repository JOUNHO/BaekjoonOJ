#include<iostream>
using namespace std;

int main(void){
  int n;
  int sum=0;
  cin >>n;
  char *temp =new char[n];
  cin >>temp;
  for(int i=0;i<n;i++){
    sum += temp[i]-48;
      cout<<temp[i]<<endl;
  }
  cout<<sum<<endl;
} 