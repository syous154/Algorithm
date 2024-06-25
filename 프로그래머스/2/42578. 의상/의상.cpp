#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> m;
    
    for(int i = 0 ; i < clothes.size() ; i++){
        if(m.find(clothes[i][1]) != m.end()){  // 이미 해당 부위에 입을 수 있는 옷이 있을 때
            m[clothes[i][1]]++;
        }
        else{
            m.insert({clothes[i][1],1});    // 없을 때
        }
    }
    
    
    for(auto iter = m.begin(); iter != m.end(); iter++){
// 의상이 하나 있을 때 가능한 경우의 수는 입거나, 안입거나 이다. -> map에 저장한 값 + 1을 해야 모든 경우의 수를 생각 가능하다.
        answer *= iter->second + 1;         
    }
    
    answer -= 1;    //단, 아무 것도 안입은 경우는 제외해야하므로 -1을 해준다.
    return answer;
}