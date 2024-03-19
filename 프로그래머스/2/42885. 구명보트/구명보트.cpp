#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    // 가장 무거운 사람 + 가장 가벼운 사람을 같이 태운다. 같이 못 태우면 가장 무거운 사람부터
    sort(people.begin(),people.end());
    
    int idx=0;
    while(idx < people.size()){
        int back = people.back();
        people.pop_back();
        
        if(people[idx]+back<=limit){
            answer++;
            idx++;
        }
        else{
            answer++;
        }
    }


    return answer;
}