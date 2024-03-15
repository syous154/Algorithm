#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;
deque<int> dq;
 
void func(string s,int n){
    bool flag = true;
    bool rvr = false;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'R'){
            rvr = !rvr;
        }
        else if(s[i] == 'D'){
            if(dq.size() == 0){
                cout<<"error"<<'\n';
                flag = false;
                break;
            }
            if(rvr){
                dq.pop_back();
            }
            else{
                dq.pop_front();
            }
        }
    }
    if(flag == true && rvr == false){
        cout<<"[";
        for(auto i = dq.begin(); i != dq.end();i++){
            if(i == dq.end() - 1){
                cout<<*i;
            }else{
                cout<<*i<<",";
            }
        }
        cout<<"]";
        cout<<'\n';
    }
    else if(flag == true && rvr == true){
        cout<<"[";
        for(auto i = dq.rbegin(); i != dq.rend();i++){
            if(i == dq.rend() - 1){
                cout<<*i;
            }else{
                cout<<*i<<",";
            }
        }
        cout<<"]";
        cout<<'\n';
    }
    dq.clear();
}
int main()
{
    int t;
    cin>>t;
 
    for(int i = 0 ; i < t; i++){
        string s;
        int n;
        int num;
        char c;
        cin>>s;
        cin>>n;
        int count = 0;
        if(n == 0){
            cin>>c;
            cin>>c;
            func(s,n);
        }
        else{
            while(count != n){
                cin>>c;
                cin>>num;
                dq.push_back(num);
                count++;
            }
        cin>>c;
        func(s,n);
        }
        count = 0;
    }
 
    return 0;
}
