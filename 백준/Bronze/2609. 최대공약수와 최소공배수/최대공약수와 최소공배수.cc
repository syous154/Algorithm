#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    int min,max;
    int val1,val2;
    cin>>n1;
    cin>>n2;
    if(n1 <= n2){
        min = n1;
        max = n2;
    }
    else{
        min = n2;
        max = n2;
    }
    for(int i = 1; i <= min;i++){
        if(n1 % i == 0 && n2 % i == 0){
            val1 = i;
        }
    }
    int i =1;
    int j = 1;
    while(1){
        
        if(n1*i == n2*j){
            val2 = n1*i;
            break;
        }
        else if(n1*i < n2*j){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<val1<<endl<<val2<<endl;
   
    return 0;
}