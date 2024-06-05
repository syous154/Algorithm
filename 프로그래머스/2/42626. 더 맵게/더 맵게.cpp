#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;


int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0 ; i < scoville.size(); i++){
        pq.push(scoville[i]);
    }
    
    while(pq.top() < K){
        if(pq.size() < 2){
            if(pq.top() < K){
                answer=-1;
                break;
            }
        }
        int val1 = pq.top();
        pq.pop();
        int val2 = pq.top();
        pq.pop();
        
        int val3 = val1 + (val2 * 2);
        
        pq.push(val3);
        
        answer++;
    }
    
    return answer;
}