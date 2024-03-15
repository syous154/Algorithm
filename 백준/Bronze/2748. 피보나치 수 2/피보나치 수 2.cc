#include <iostream>

using namespace std;

int main()
{
    int n;
    long long n1 = 0;
    long long n2 = 1;
    long long n3;
    cin>>n;
    if(n == 0){
        cout<<n1<<endl;
    }
    else if(n == 1){
        cout<<n2<<endl;
    }
    else{
        long long tmp;
        for(int i = 0 ; i < n-1 ; i++){
            n3 = n2+n1;
            tmp = n2;
            n2 = n3;
            n1 = tmp;
        }
       cout<<n3<<endl;
    }
 
    return 0;
}