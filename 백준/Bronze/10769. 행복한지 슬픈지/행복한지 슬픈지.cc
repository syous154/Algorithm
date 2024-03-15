#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string s;
    int happy = 0;
    int sad = 0; 
    getline(cin,s);
    if(s.length() <3){
        cout<<"none"<<endl;
        return 0;
    }
    for(int i = 0 ; i < s.length()-2;i++){
        if(s[i] == ':' && s[i+1] == '-' && s[i+2] == ')'){
            happy++;
        }
        else if(s[i] ==':' && s[i+1] == '-' && s[i+2] == '('){
            sad++;
        }
    }
    if(happy>sad)
        cout<<"happy"<<endl;
    else if (sad > happy)
        cout<<"sad"<<endl;
    else if(happy != 0 && sad != 0 && happy == sad)
        cout<<"unsure"<<endl;
    else if(happy == 0 && sad == 0)
        cout<<"none"<<endl;
    return 0;
}