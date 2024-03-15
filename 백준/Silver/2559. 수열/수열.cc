#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,k,val;
    int num[100000] = {0};
    
    cin>>n>>k;
    int n_max = k*(-100) - 1;
    for(int i = 1;i<=n;i++){
        cin>>val;
        num[i] = num[i-1] + val;
    }
    for(int i = k; i <= n; i++){
        n_max = max(n_max,num[i] - num[i - k]);
    }
    cout<<n_max<<endl;
    
    return 0;
}