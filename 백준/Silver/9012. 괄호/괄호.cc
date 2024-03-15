#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    
    string ss;
    int n;
    
    cin>>n;
    
    for(int i = 0 ; i < n ;i++){
        int cnt = 0;
        stack<char> s;
        cin>>ss;
        for(int j = 0 ; j < ss.length() ;j++){
            if(ss[j] == '('){
                s.push(ss[j]);
            }
            else if(ss[j] == ')'){
                if(s.empty()){
                    cout<<"NO"<<endl;
                    cnt = 1;
                    break;
                }
                else{
                    s.pop();
                }
            }
        }
        if(s.empty() && cnt == 0){
            cout<<"YES"<<endl;
        }
        else if(!s.empty() && cnt == 0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}