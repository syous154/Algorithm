#include <iostream>
#include <string>

using namespace std;
int queue[100000] = {0};
int first = 0;
int last = 0;

void push(){
    int x;
    cin>>x;
    queue[last++] = x;
}
int empty(){
    if(first == last){
        cout<<1<<endl;
        return 1;
    }else{
        cout<<0<<endl;
        return 0;
    }
}
int pop(){
    if(first == last){
        return -1;
    }else{
        return queue[first++];
    }
}
void size(){
    if(first == last){
        cout<<"0"<<endl;
    }else{
        cout<<(last-first)<<endl;

    }
}

void front(){
    if(first == last){
        cout<<"-1"<<endl;
    }else{
        cout<<queue[first]<<endl;
    }
}
void back(){
    if(first == last){
        cout<<"-1"<<endl;
    }else{
        cout<<queue[(last-1)]<<endl;
    }
}
int main()
{
    int n;
    string s;
    cin>>n;
    
    for(int i = 0; i < n;i++){
        cin>>s;
        if(s == "push"){
            push();
        }
        else if(s == "pop"){
            int elm = pop();
            cout<<elm<<endl;
        }
        else if(s == "size"){
            size();
        }
        else if(s == "empty"){
            empty();
        }
        else if(s == "front"){
            front();
        }
        else if(s == "back"){
            back();
        }
    }
    return 0;
}