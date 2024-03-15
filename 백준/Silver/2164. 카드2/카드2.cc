#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    queue<int> q;
    cin>>n;
    for(int i = 1 ; i <= n; i++){
        q.push(i);    
    }
    int cnt = 0;
    while(1){
        if(q.size() == 1){
            break;
        }
        if(cnt % 2 == 0){
            q.pop();
        }
        else{
            int val = q.front();
            q.pop();
            q.push(val);
        }
        cnt++;
    }
    cout<<q.front()<<'\n';
    
    return 0;
}
