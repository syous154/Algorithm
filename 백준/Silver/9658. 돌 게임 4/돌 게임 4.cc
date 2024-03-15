#include <iostream>
#include <algorithm>

using namespace std;

int main(){

  int n;
  cin>>n;
  bool arr[1001];
  
  arr[1] = 0;
  arr[2] = 1;
  arr[3] = 0;
  arr[4] = 1;

  for(int i=5; i<=n; ++i) {
    if(arr[i-1] && arr[i-3] && arr[i-4]) arr[i] = 0;
    else arr[i] = 1;
  }

  if(arr[n] == 1) cout<<"SK";
  else cout<<"CY";
}