#include <iostream>

using namespace std;

int main()
{
    int all;
    int part;
    
    cin>>all;
    for(int i = 0 ; i < 9;i++){
        cin>>part;
        all -= part;
    }
    cout<<all<<endl;
 
    return 0;
}