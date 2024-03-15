#include <iostream>

using namespace std;

int main()
{   
    int score[1000];
    int n,max = -1;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>score[i];
        if(max < score[i])
            max = score[i];
    }
    double sum = 0;
    for(int i = 0 ; i < n;i++){
        sum += (double)score[i]/(double)max*100;
    }
    cout<<sum/(double)n<<endl;
    return 0;
}