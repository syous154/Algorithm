#include <iostream>

using namespace std;
long long gcd(int a, int b) {
    long long temp;
    if(a>b){
        while (b != 0) {
        	temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }
    else{
        while (a != 0) {
        	temp = b % a;
            b = a;
            a = temp;
        }
        return b;
    }
}
int main()
{
    long long n;
    cin>>n;
    long long x,y;
    for(int i = 0 ; i < n; i++){
        cin>>x>>y;
        long long val = gcd(x,y);
        long long rst = (x*y)/val;
        cout<<rst<<'\n';
    }
    return 0;
}