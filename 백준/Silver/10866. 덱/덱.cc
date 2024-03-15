#include <iostream>
#include <deque>

using namespace std;
deque<int> dq;

int main()
{
    int n;
    cin>>n;
    string s;
    int x;
    for(int i = 0 ; i < n ; i++){
        cin>>s;
        if(s == "push_front"){
            cin>>x;
            dq.push_front(x);
        }
        else if(s == "push_back"){
            cin>>x;
            dq.push_back(x);
        }
        else if(s == "pop_front"){
            if(dq.empty() == 1){
                cout<<"-1"<<'\n';
            }
            else{
                cout<<dq.front()<<'\n';
                dq.pop_front();
            }
        }
        else if(s == "pop_back"){
            if(dq.empty() == 1){
                cout<<"-1"<<'\n';
            }
            else{
                cout<<dq.back()<<'\n';
                dq.pop_back();
            }
        }
        else if(s == "size"){
            if(dq.empty() == 1){
                cout<<"0"<<'\n';
            }else{
                cout<<dq.size()<<'\n';
            }
        }
        else if(s == "empty"){
            cout<<dq.empty()<<'\n';
        }
        else if(s == "front"){
            if(dq.empty() == 1){
                cout<<"-1"<<'\n';
            }
            else{
                cout<<dq.front()<<'\n';
            }
        }
        else if(s == "back"){
            if(dq.empty() == 1){
                cout<<"-1"<<'\n';
            }
            else{
                cout<<dq.back()<<'\n';
            }
        }
    }
    return 0;
}