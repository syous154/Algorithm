#include<iostream>

using namespace std;

int main(){
    long long n;
    
    cin>>n;
    
    if(n%5==2 || n%5==0){
        cout<<"CY"<<'\n';
    }
    else{
        cout<<"SK"<<'\n';
    }

    return 0;
}