#include <iostream>

using namespace std;

int main()
{
    int n;
    int count = 0;
    
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        if(i < 100){
            count++;
        }
        else if(i >= 100 && i < 1000){
            int n1 = i/100;
            int n2 = (i/10)%10;
            int n3 = i % 10;
            
            if((n1 - n2) == (n2 - n3)){
                count++;
            }
        }
    }
    
    cout<<count<<endl;
    return 0;
}