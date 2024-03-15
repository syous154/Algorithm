#include <iostream>

using namespace std;

int main()
{
    int in,out;
    int max = -1;
    int sum = 0;
    for(int i = 0 ; i<4; i++){
        cin>>out>>in;
        sum = sum + in - out;
        if(max < sum){
            max = sum;
        }
    }
    cout<<max<<endl;
    return 0;
}