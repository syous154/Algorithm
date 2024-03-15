#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int cmp(string a, string b){
    return a > b;
}
int main()
{
    int n;
    map<string,bool> m;
    cin>>n;
    string s1,s2;
    for(int i = 0 ; i < n ; i++){
        cin>>s1>>s2;
        if(s2 == "enter"){
            m.insert({s1,true});
        }
        else{
            m.erase(s1);
        }
    }
    for (auto iter = m.rbegin() ; iter !=  m.rend(); iter++)
    {
	    cout<<iter->first<<'\n';
    }

    return 0;
}