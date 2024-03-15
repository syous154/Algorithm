#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,p,c;
    int price;
    string name;
    string max_name;
    
    
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>p;
        int max = -1;
        for(int j = 0 ; j < p;j++){
            cin>>price>>name;
            if(max < price){
                max = price;
                max_name = name;
            }
        }
        cout<<max_name<<endl;
    }
    
    return 0;
}