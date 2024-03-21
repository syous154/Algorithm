#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    int n = sizes.size();
    
    int row = 0, col = 0;
    for(int i = 0 ; i < n ; i++){
        if(sizes[i][0] < sizes[i][1]){
            swap(sizes[i][0], sizes[i][1]);
        }
        if(row < sizes[i][0]){
            row = sizes[i][0];
        }
        if(col < sizes[i][1]){
            col = sizes[i][1];
        }
    }
    answer = row * col;
    return answer;
}