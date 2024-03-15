#include <iostream>

using namespace std;

int main()
{
    int n,k;
    int rst = 0;

    cin>>n>>k;

    for(int i = 1 ; i <= n; i++){
        rst = ((rst+k-1)%i)+1;
    }
    cout<<rst<<'\n';

    return 0;

}