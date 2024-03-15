#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string s;
    char apb[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    while(1){
        int rst[26] ={0,};
        getline(cin,s);
        if(s == "*"){
            break;
        }
        
        
        for(int i = 0 ; i < s.length();i++){
            for(int j = 0 ; j < 26;j++){
                if(s[i] == apb[j]){
                    rst[j] = 1;
                }
            }    
        }
        int cnt = 0;
        for(int i= 0 ; i < 26 ; i++){
            if(rst[i] == 0){
                cout<<"N"<<endl;
                cnt = 1;
                break;
            }
        }
        if(cnt == 0){
            cout<<"Y"<<endl;
        }
        
        
        
    }
    
    return 0;
}