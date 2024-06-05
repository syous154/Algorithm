#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    queue<int> q;
    
    for(int i = 0; i < arr.size() ; i++){
        q.push(arr[i]);    
    }   
    int val = q.front();
    q.pop();
        
    while(!q.empty()){
        if(q.front() == val){
            q.pop();
            continue;
        }    
        else{
            answer.push_back(val);
            val = q.front();
            q.pop();
        }
    }
    answer.push_back(val);
    return answer;
}