#include <iostream>

using namespace std;

int main(){
    int l,p,v;
    int i = 1;
    while(1){
        cin>>l>>p>>v;
        if(l == 0 && p == 0 && v == 0){
            break;
        }
        int cnt = v/p;
        int rst;
        if(v%p > l){
            rst = cnt * l + l;
        }
        else{
            rst = cnt * l + (v%p);
        }
        cout<<"Case "<<i<<": "<<rst<<endl;
        
        i++;
    }
}