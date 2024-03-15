#include <iostream>

using namespace std;

int main()
{
    int n,f;
    int val;
    
    cin>>n>>f;
    
    n = (n/100)*100;
    for(int i = 0; i < 100;i++){
        if((n+i)%f == 0){
            val = i;
            break;
        }
    }
    if(val < 10){
        cout<<"0"<<val<<endl;
    }
    else{
        cout<<val<<endl;
    }
    return 0;
}