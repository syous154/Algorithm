#include <iostream>

using namespace std;

int main()
{
    int t;
    int c,v;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>c>>v;
        
        cout<<"You get "<<(c/v)<<" piece(s) and your dad gets "<<(c%v)<<" piece(s)."<<endl;
    }
    return 0;
}