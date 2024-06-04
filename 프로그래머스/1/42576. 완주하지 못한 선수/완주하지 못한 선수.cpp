#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    map<string, int> m;
    
    int n = participant.size();
    for(int i = 0 ; i < n; i++){
        if(m.find(participant[i]) == m.end()){  // 처음 보는 이름이 들어오면
            m.insert({participant[i], 1});    
        }
        else{
            m[participant[i]]++;
        }
    }
    
    int k = completion.size();
    for(int i = 0 ; i < k ; i++){
        m[completion[i]]--;
    }
    
    for(int i = 0 ; i < n; i++){
        if(m[participant[i]] > 0){
            answer = participant[i];
            break;
        }
    }
    
    return answer;
}