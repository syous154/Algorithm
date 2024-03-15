#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int score[8];
    int c_score[8];
    int sum = 0;
    int num[5];
    
    for(int i = 0; i < 8; i++){
        cin>>score[i];
        c_score[i] = score[i];
    }
    
    sort(score,score+8);
    
    for(int i = 3;i < 8;i++){
        sum += score[i];
    }
    
    int k = 0;
    for(int i = 3; i <8;i++){
        for(int j = 0; j < 8; j++){
            if(score[i] == c_score[j]){
                num[k] = j+1;
                k++;
            }
        }
    }
    cout<<sum<<endl;
    sort(num,num+5);
    cout<<num[0]<<" "<<num[1]<<" "<<num[2]<<" "<<num[3]<<" "<<num[4]<<endl;
    return 0;
}