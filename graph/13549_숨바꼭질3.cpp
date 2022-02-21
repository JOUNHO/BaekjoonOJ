#include<iostream>
#include<deque>
using namespace std;


int n,k;
deque<int> dq;
int time[100001];
bool check[100001];

void bfs(){

  while(!dq.empty()){
    int x =dq.front();

    if (x == k)
        {
          cout << time[x] << endl;
          return;
        }

    dq.pop_front();
    for(int i=0;i<3;i++){
      int newX;
      if(i == 0){
        newX = 2*x;
      }else if(i == 1){
        newX = x-1;
      }else if(i == 2){
        newX = x+1;
      }
      if(newX < 0 || newX >100000){
        continue;
      }

      if (check[newX] == false){
        check[newX] = true;
        int t = (i == 0) ? 0 : 1;
        time[newX] = time[x] + t;
        (i == 0) ? dq.push_front(newX) : dq.push_back(newX);
      }
    }

  }
}


int main(){
  cin >>n>>k;

  dq.push_front(n);
  check[n] = true;
  bfs();
  return 0;
}