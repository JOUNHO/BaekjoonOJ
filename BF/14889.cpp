#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;


int n;
int result1=0,result2=0;
int a[20][20];
int firstArr[10];
int secondArr[10];
int ans =100;

void go(int index,int first,int second){

  if(index ==n){
    for(int i=0;i<n/2;i++){
      for(int j=0;j<n/2;j++){
        result1+=a[firstArr[i]][firstArr[j]];
        result2+=a[secondArr[i]][secondArr[j]];
      }
    }
    ans = min(ans,abs(result1-result2));
    result1=0;
    result2=0;
    return ;
  }
  if(first==(n/2)){
    secondArr[second] = index ;
    go(index+1,first,second+1);  //두번째 팀
    return ;
  }else if(second==(n/2)){
    firstArr[first] = index;
    go(index+1,first+1,second); //첫번째 팀
    return ;
  }

  firstArr[first] = index;
  go(index+1,first+1,second); //첫번째 팀
  secondArr[second] = index;
  go(index+1,first,second+1);  //두번째 팀
}

int main(){
  cin >>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> a[i][j];
    }
  }
  go(0,0,0);
  cout<<ans <<endl;
}