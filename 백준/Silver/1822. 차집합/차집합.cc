#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void Print_Vec(const vector<int> &vec) {
    
    for (const int &it : vec) {
        cout << it << " ";
    }
    cout << "\n";
}
int main()
{
    int n,m;
    vector<int> s1,s2;
    
    cin>>n>>m;
    int val;
    for(int i=0; i < n; i++){
        cin>>val;
        s1.push_back(val);
    }
    
    for(int i=0; i < m; i++){
        cin>>val;
        s2.push_back(val);
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    
    vector<int> buff(s1.size() + s2.size());
    auto iter = set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), buff.begin());
    buff.erase(iter, buff.end());
    cout<<buff.size()<<'\n';
    Print_Vec(buff);

    
}
