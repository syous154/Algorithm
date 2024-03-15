#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int t[1000];
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>t[i];
    }
    sort(t,t+n);
    int sum = 0;
    int k = n;
    for(int i = 0 ; i < n;i++){
        sum+= k*t[i];
        k--;
    }
    cout<<sum<<endl;
    return 0;
}