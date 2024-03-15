#include <iostream>
#include <algorithm>

using namespace std;
int compare(int x,int y){
    return x>y;
}
int main()
{
    int k,n;
    cin>>k;
    for(int i = 0;i< k ; i++){
        cin>>n;
        int score[n];
        int max = -1;
        int min = 101;
        int minus = 0;
        for(int j = 0; j < n; j++){
            cin>>score[j];
            if(max < score[j]){
                max = score[j];
            }
            if(min > score[j]){
                min = score[j];
            }
        }
        sort(score,score + n,compare);
        for(int j = 0; j < n-1; j++){
            if(minus< (score[j] - score[j+1])){
                minus = (score[j] - score[j+1]);
            }
        }
        cout<<"Class "<<(i+1)<<endl<<"Max "<<max<<", Min "<<min<<", Largest gap "<<minus<<endl;
    }
    return 0;
}