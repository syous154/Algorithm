#include <iostream>

using namespace std;

int main()
{
    int n;
    int school,apple;
    int val = 0;
    
    cin>>n;
    
    for(int i = 0 ; i < n; i++){
        cin>>school>>apple;
        val += apple % school;
    }
    cout<<val<<endl;
 
    return 0;
}