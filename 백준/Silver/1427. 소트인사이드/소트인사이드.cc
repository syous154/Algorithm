#include <iostream>
#include <algorithm>
using namespace std;

int compare(int x, int y){
    return x > y;
}
int main()
{
    string s;
    
    cin>>s;
    
    int num[s.length()];
    for(int i = 0 ; i < s.length() ;i++){
        num[i] = s[i] - '0';
    }
    sort(num,num+(s.length()),compare);
    
    for(int i = 0 ; i < s.length();i++){
        cout<<num[i];
    }
    
    return 0;
}