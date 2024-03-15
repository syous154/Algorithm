#include <iostream>
#include <algorithm>
using namespace std;

int compare(int x, int y){
    return x > y;
}
int main()
{
    int t;
    int num[10];
    cin>>t;
    
    for(int i = 0 ; i < t ; i++){
        for(int j = 0 ; j < 10; j++){
            cin>>num[j];
        }
        sort(num,num+10);
        cout<<num[7]<<endl;
    }
    return 0;
}