#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
 int n;
 cin >> n;
 int *arr = new int[n];
 for(int i=0;i<n;i++){
   cin >> arr[i];
 }
 int minVal = *min_element(arr,arr+n);
 int maxVal = *max_element(arr,arr+n);

 cout<< minVal <<" "<<maxVal<<endl;
}