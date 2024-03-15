#include <iostream>

using namespace std;

int main()
{
    int t,s,n,q,p;
    int total;
    cin>>t;
    
    for(int i = 0; i < t;i++){
        total = 0;
        cin>>s;
        total += s;
        cin>>n;
        for(int j = 0 ; j < n; j++){
            cin>>q>>p;
            total +=(q*p);
        }
        cout<<total<<endl;
    }
    return 0;
}