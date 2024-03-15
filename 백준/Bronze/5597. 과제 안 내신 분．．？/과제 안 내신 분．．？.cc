#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num[30] = {0};
    int n;
    int rst[2] ={0};
    for(int i = 0 ; i < 28; i++){
        cin>>n;
        num[n-1] = 1;
    }
    int cnt = 0;
    for(int i = 0 ; i < 30; i++){
        if(num[i] == 0){
            rst[cnt++] = i+1;
        } 
    }
    sort(rst,rst+2);
    cout<<rst[0]<<'\n'<<rst[1];
    return 0;
}