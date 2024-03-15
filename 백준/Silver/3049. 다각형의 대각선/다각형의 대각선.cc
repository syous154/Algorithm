#include <iostream>

using namespace std;

int main()
{
    int n;
    int a = 1;
    int point;
    
    cin>>n;
    
    for(int i = n; i > (n-4); i--){
        a *= i;
    }
    point = a/24;
    
    cout<<point<<endl;
    
    return 0;
}