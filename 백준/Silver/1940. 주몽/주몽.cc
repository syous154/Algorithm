#include <iostream>

using namespace std;

int main()
{
    int n,m;
    int num[15000];
    cin>>n;
    cin>>m;
    
    for(int i = 0 ; i < n; i++){
        cin>>num[i];
    }
    int count = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n;j++){
            if(num[i] + num[j] == m){
                count++;
            }
        }
    }
    
    cout<<count<<endl;
    
    return 0;
}