#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,n;
    int num[10000];
    
    cin>>t;
    for(int i = 0; i<t;i++){
        cin>>n;
        int max = -1;
        int index;
        for(int j = 0 ; j < n; j++){
            cin>>num[j];
            if (max < num[j]){
                max = num[j];
                index = j;
            }
        }
        int sum = 0;
        int cnt = 0;
        sort(num,num+n);
        for(int j = 0; j < n; j++){
            if(num[n-2] == num[n-1]){
                cnt = 1;
            }
            sum+=num[j];
        }
        sum = sum - max;
        if(cnt == 0){
            if(max > sum){
                cout<<"majority winner "<< index+1<<'\n'; 
            }
            else if(max <= sum){
                cout<<"minority winner "<< index+1<<'\n'; 
            }
        }
        else if(cnt == 1){
            cout<<"no winner"<<'\n';
        }
        
    }
    
    return 0;
}