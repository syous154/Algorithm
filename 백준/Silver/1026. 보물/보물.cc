#include <iostream>
#include <algorithm>
using namespace std;
int compare(int x, int y){
    return x>y;
}
int main()
{
    int n;
    
    cin>>n;
    
    int a[n];
    int b[n];
    int c_b[n];
    for(int i = 0 ; i < n ; i++)
        cin>>a[i];
    for(int i = 0 ; i < n ; i++){
        cin>>b[i];
        c_b[i] = b[i];
    }
    int sum = 0;
    sort(a,a+n);
    sort(c_b,c_b+n,compare);
    
    for(int i = 0 ; i < n ; i++){
        sum += (a[i]*c_b[i]);
    }
    cout<<sum<<'\n';
    return 0;
}