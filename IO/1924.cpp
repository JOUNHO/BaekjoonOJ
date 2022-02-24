#include<iostream>
#include<string>
using namespace std;

int main(void){
  int x,y;
  int month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
  string day[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
  cin >> x >> y ;
  int sum=y;
  for(int i=1;i<x;i++){
    sum+=month[i];
  }
  cout<<day[sum%7]<<endl;

}