#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;


int n;
vector<int> v[100001];
queue<int> q;
pair<bool,int> check[100001];
int a[100001];
int main(){
  int x,y;
  cin>>n;
  for(int i=0;i<n-1;i++){
    cin >>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
  }

  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  q.push(a[0]);
  check[a[0]]=make_pair(true,0);
  int cnt = 0;
  int checkNum =1;

  
  while(!q.empty()){
    int qx = q.front(); q.pop();
    for(int next : v[qx]){
      if(check[next].first ==false){
         cnt++;
        check[next] = make_pair(true,qx);
      }
     
    }

    for(int i=checkNum;i<checkNum+cnt;i++){ 
      int order=a[i];
      if(check[order].first ==true && check[order].second ==qx){
        q.push(order);
        continue;
      }else{
        cout <<0;
        return 0;
      }
    }
    checkNum+=cnt;
    cnt=0;
  }
  if(a[0] !=1 ){
    cout <<0;
    return 0;
  }
  cout <<1;


}
