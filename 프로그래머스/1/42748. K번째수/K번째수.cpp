#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i = 0 ; i < commands.size(); i++){
        int start = commands[i][0] -1;
        int end = commands[i][1]-1;
        int k = commands[i][2]-1;
        vector<int> v;
        for(int idx = 0; idx<array.size(); idx++){
            if(idx >= start && idx <= end){
                v.push_back(array[idx]);
            }
        }
        sort(v.begin(), v.end());
        
        answer.push_back(v[k]);
    }
    
    return answer;
}