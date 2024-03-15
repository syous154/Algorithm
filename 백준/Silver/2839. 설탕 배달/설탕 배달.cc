#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt1 = n / 5;
    int cnt2;
    while(1)
    {
        if(cnt1 < 0)
        {
            cout << "-1";
            return 0;
        }
        if((n-(5*cnt1))%3 == 0)
        {
            cnt2 = (n-(5*cnt1))/3;
            break;
        }
        cnt1--;
    }
    cout<<cnt1+cnt2<<'\n';
}