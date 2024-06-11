#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    int garo = 0, sero = 0;
    for(int i = 0; i < sizes.size(); i++){
        if(sizes[i][0] > sizes[i][1]){
            swap(sizes[i][0] , sizes[i][1]);            
        }
        
        if(sizes[i][0] > garo){
            garo = sizes[i][0];
        }
        if(sizes[i][1] > sero){
            sero = sizes[i][1];
        }
        
    }
    answer = garo * sero;
    return answer;
}