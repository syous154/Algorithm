#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k = 1;
    for(int i = 0 ; i<n;i++){
        for(int j = n - i-1; j > 0 ; j--){
            cout<<" ";
        }
        for(int j = 0; j < k ;j++){
            cout<<"*";
        }
        k+=2;
        cout<<endl;
    }
    return 0;
}