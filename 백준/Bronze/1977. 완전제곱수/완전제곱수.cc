#include <iostream>

using namespace std;

int main()
{
   int min,max;
   int sum = 0;
   int count = 0;
   int m_min;
   
   cin>>min;
   cin>>max;
   
   for(int i = 1 ; i <=100;i++){
       if(i*i >= min && i*i <= max){
           if(count == 0){
               m_min = i*i;
           }
           sum += (i*i);
           count = 1;
       }
   }
   if(sum != 0){
       cout<<sum<<endl<<m_min<<endl;
   }
   else{
       cout<<"-1"<<endl;
   }
   
   
   return 0;
}