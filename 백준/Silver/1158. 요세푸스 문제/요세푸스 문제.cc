
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n,k;
    queue<int> q;
    int cnt = 1;
    
    cin>>n>>k;
    
    for(int i = 1 ; i <= n ; i++){
        q.push(i);
    }
    cout<<"<";
    while(1){
        if(q.empty()){
            break;
        }
        if(cnt % k == 0){
            int rst = q.front();
            q.pop();
            if(q.empty()){
                cout<<rst<<">";
            }
            else{
                cout<<rst<<", ";
            }
    
        }
        else{
            int val = q.front();
            q.pop();
            q.push(val);
        }
        cnt++;
    }
    return 0;
}