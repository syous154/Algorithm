#include <iostream>
using namespace std;

int main()
{
    int t;
    
    cin>>t;
    int stack[t];
    int v;
    int top = -1;
    for(int i = 0 ; i < t; i++){
        cin>>v;
        if(v == 0){
            top --;
        }
        else{
            stack[++top] = v;
        }
    }
    int sum = 0;
    
    if(top != -1){
        for(int i = 0 ; i <= top;i++){
            sum += stack[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}