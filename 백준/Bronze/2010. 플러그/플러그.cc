#include <iostream>

using namespace std;

int main()
{
    int n,tab;
    int plug = 1;
    cin>>n;
    
    for(int i = 0; i < n;i++){
        cin>>tab;
        plug += tab;
    }
    cout<<(plug-n)<<endl;
    return 0;
}