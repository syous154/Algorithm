#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n,m;
    string s[500000];
    cin>>n>>m;
    
    for(int i = 0 ; i < n+m ; i++){
        cin>>s[i];
    }
    sort(s,s+n+m);
    string rst[500000];
    int cnt = 0;
    for(int i = 0; i <n+m-1;i++){
        if(s[i] == s[i+1]){
            rst[cnt] = s[i];
            cnt++;
        }
    }
    cout<<cnt<<'\n';
    for(int i = 0; i < cnt;i++){
        cout<<rst[i]<<" ";
    }
    return 0;
}