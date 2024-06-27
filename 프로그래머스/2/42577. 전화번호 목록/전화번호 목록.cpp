#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    sort(phone_book.begin(), phone_book.end());
    map<string, bool> m;
    for(int i= 0; i < phone_book.size(); i++){
        m[phone_book[i]] = true;
    }
    
    for(int i= 0; i < phone_book.size() - 1 ; i++){
        int prefix_len = phone_book[i].length();
            
        if(phone_book[i+1].substr(0,prefix_len) == phone_book[i]  && m[phone_book[i+1].substr(0,prefix_len)] == true){
            //cout<<phone_book[i]<< ' ' << phone_book[j]<<'\n';
            return false;
        
        }            
            
            // 시간초과 남
            // str.find(val) 함수를 이용해 str내에 val이 있는지 확인한다. 있으면 첫번째 인덱스를 반환하고 없으면 string::npos를 반환한다.
            // // index가 반환 될 때 인덱스 값은 0이어야 접두사인 경우이기 때문에 조건을 추가함
            // if(phone_book[j].find(phone_book[i]) != string::npos && phone_book[j].find(phone_book[i]) == 0){
            //     answer = false;
            //     return answer;
            // }
        
    }
    
    
    return answer;
}