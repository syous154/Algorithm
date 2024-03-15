#include <iostream>

using namespace std;

int main()
{
   int c;
   int n,score[1000];

   cin>>c;
   for(int k = 0 ; k < c; k++){
       cin>>n;
       int count = 0;
       int avg = 0;
       for(int i = 0; i < n;i++){
           cin>>score[i];
           avg += score[i];
       }
       avg = avg / n;
   
       for(int i = 0; i < n;i++){
           if(avg < score[i])
            count++;
        }
        cout.precision(3);
        cout<<((double)count/(double)n)*100<<"%"<<endl;
    }
   return 0;
}