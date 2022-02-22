#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Node {
  int left;
  int right;
  int level;
  int column;
};

int n;
Node a[10001];
int cnt[10001];
int root = 0;
int column = 0;
vector<int> v[100001];
void inorder(int node, int level){
  if (node == -1) return;
  inorder(a[node].left,level+1);
  a[node].level = level;
  a[node].column = ++column;
  v[level].push_back(column);
  inorder(a[node].right, level+1);
}
int main(){
  cin >> n;
  for (int i=0; i<n; i++){
    int x, y, z;
    cin >> x >> y >> z;
    a[x].left = y;
    a[x].right = z;
    if(y != -1) cnt[y] +=1;
    if(z != -1) cnt[z] +=1;
  }
  
  for(int i=1; i<=n;i++){
    if(cnt[i]==0) {
      root = i;
    }
  }
  inorder(root,1);

  int answer=0;
  int answer_level=0;
  for(int level=1;level<=n;level++){
    if(v[level].size() > 0){
      if(answer < v[level].back()-v[level].front()+1){
        answer =  v[level].back()-v[level].front()+1;
        answer_level =level;
      }
    }
  }
  cout << answer_level << ' ' <<answer<<endl;
  return 0;

}