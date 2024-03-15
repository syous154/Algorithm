#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    
    for(int i = 0 ; i < t; i++){
        cin>>n>>m;
        int count = 0;
        for(int j = n; j<=m;j++){
            string itg = to_string(j);
            for(int k = 0; k < itg.length();k++){
                if(itg[k] == '0'){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}