#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n,m;
    map<string, bool> mp;
    string s;
    cin>>n>>m;
    
    for(int i = 0 ; i < n ; i++){
        cin>>s;
        mp[s] = true;
    }
    int cnt = 0;
    for(int i = 0 ; i < m ; i++){
        cin>>s;
        if(mp[s]){
            cnt++;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}
