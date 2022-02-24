#include <iostream>
#include <string>
using namespace std;

int main(void){
  int T;
  int a;
  char b;
  string s;
  char c;
  cin >> T;
  for(int i=0; i<T;i++) {
    getline(cin, s,'a');
    cout <<s<<endl;
  }
  return 0;
}