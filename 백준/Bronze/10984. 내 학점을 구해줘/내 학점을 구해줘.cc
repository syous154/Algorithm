#include <iostream>

using namespace std;

int main()
{
   int t,n,c;
   double g;
   double sum;
   int grade;
   
   cout<<fixed;
   cout.precision(1);
   
   cin>>t;
   for(int i = 0;i < t;i++){
       cin>>n;
       sum = 0;
       grade = 0;
       for(int j = 0 ; j < n; j++){
           cin>>c>>g;
           grade += c;
           sum += ((double)c*g);
       }
       sum = sum / (double)grade;
       cout<<grade<<" "<<sum<<endl;
   }
 
    return 0;
}