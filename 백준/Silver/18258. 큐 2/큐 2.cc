#include <iostream>
#include <queue>

using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    queue<int> q;
    int n;
    
    cin>>n;
    
    for(int i = 0 ; i < n ; i++){
        string s;
        cin>>s;
        if(s == "push"){
            int val;
            cin>>val;
            q.push(val);
        }
        else if(s == "front"){
            if(q.empty()){
                cout<<"-1"<<'\n';
            }
            else{
                cout<<q.front()<<'\n';
            }
        }
        else if(s == "back"){
            if(q.empty()){
                cout<<"-1"<<'\n';
            }
            else{
                cout<<q.back()<<'\n';
            }
        }
        else if(s == "size"){
            if(q.empty()){
                cout<<"0"<<'\n';
            }
            else{
                cout<<q.size()<<'\n';
            }
        }
        else if(s == "empty"){
            if(q.empty()){
                cout<<"1"<<'\n';
            }
            else{
                cout<<"0"<<'\n';
            }
        }
        else if(s == "pop"){
            if(q.empty()){
                cout<<"-1"<<'\n';
            }
            else{
                cout<<q.front()<<'\n';
                q.pop();
            }
        }
    }
    
    return 0;
}