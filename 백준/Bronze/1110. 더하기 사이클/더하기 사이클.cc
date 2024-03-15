#include <iostream>

using namespace std;

int main()
{   
    int num,n,a,b;
    int count = 0;
    int sum;
    
    cin>>num;
    n = num;
    while(1){
        a = n / 10;
        b = n % 10;
        
        sum = a+b;
        if(sum>=10){
            sum = sum %10;
        }
        n = b*10+sum;
        count++;
        if(n == num){
            break;
        }
        
    }
    
    
    cout<<count;
    return 0;
}