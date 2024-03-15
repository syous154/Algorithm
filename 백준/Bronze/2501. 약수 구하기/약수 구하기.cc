#include <iostream>

using namespace std;

int main()
{
    int n,k;
    int cnt = 1;
    cin>>n>>k;
    
    for(int i = 1 ; i <= n;i++){
        if(n % i == 0){
            if( k== cnt){
                cout<<i<<endl;
                return 0;
            }
            cnt++;
        }
        
    }
    cout<<"0"<<endl;
    return 0;
}