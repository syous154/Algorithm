#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int coin[n];
    
    for(int i = 0 ; i < n ;i++){
        cin>>coin[i];
    }
    int count = 0;
    for(int i = n-1 ; i >= 0 ;i--){
        count += k / coin[i];
        k = k % coin[i];
        
    }
    cout<<count<<'\n';
    return 0;
}