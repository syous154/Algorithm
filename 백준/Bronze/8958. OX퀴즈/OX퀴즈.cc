#include <iostream>
#include <string>

using namespace std;

int main()
{
   int n;
   
   cin>>n;
   
   for(int i = 0 ; i < n;i++){
       string s;
       cin>>s;
       int count = 0;
       int sum = 0;
       for(int j = 0; j < s.length() ;j++){
           if(s[j] == 'O'){
                count += 1;
                
                sum += count;
           }
           else{
               count = 0;
           }
       }
       cout<<sum<<endl;
   }
   return 0;
}