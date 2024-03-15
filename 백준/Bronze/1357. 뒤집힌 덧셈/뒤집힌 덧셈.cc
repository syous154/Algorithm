#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int Rev(string x){
    string y(x);
    reverse(y.begin(),y.end());
    int val = stoi(y);
    return val;
        
}
int main()
{
    string s1,s2;
    int n1,n2,ans;
    
    cin>>s1>>s2;
    
    n1 = Rev(s1);
    n2 = Rev(s2);
    
    ans = Rev(to_string(n1+n2));
    
    cout<<ans<<endl;
    return 0;
}