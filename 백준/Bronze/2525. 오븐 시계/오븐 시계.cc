#include <iostream>

using namespace std;

int main()
{
   int h,m;
   int mm;
   int cnt;
   cin>>h>>m;
   cin>>mm;
   
   m = m+mm;
   cnt = m / 60;
   m = m - (60*cnt);
   h = h + cnt;
   if(h > 23){
       h = h -24;
   }
   cout<<h<<" "<<m<<endl;
   
    
    return 0;
}