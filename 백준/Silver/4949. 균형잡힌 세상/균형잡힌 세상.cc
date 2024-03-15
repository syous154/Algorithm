#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    while(1){
        string ss;
        int cnt = 0;
        char c;
        stack<char> s;
        getline(cin,ss);
        if(ss == "."){
            break;
        }
        for(int j = 0 ; j < ss.length() ;j++){
            if(ss[j] == '(' || ss[j] == '['){
                s.push(ss[j]);
            }
            else if(ss[j] == ')' || ss[j] ==']'){
                if(s.empty()){
                    cout<<"no"<<endl;
                    cnt = 1;
                    break;
                }
                else{
                    c = s.top();
                    if(ss[j] == ')' && c != '('){
                        cout<<"no"<<endl;
                        cnt = 1;
                        break;
                    }
                    else if(ss[j] == ']' && c != '['){
                        cout<<"no"<<endl;
                        cnt = 1;
                        break;
                    }
                    else{
                        s.pop();
                        continue;
                    }
                }
            }
        }
        if(s.empty() && cnt == 0){
            cout<<"yes"<<endl;
        }
        else if(!s.empty() && cnt == 0){
            cout<<"no"<<endl;
        }
    }
    return 0;
}