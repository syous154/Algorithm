#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int startidx = 0;
    for(int i = 0 ; i < number.size() - k; i++){
        char max = number[startidx];
        int idx = startidx;

        for(int j = startidx+1 ; j <= i+k;j++){
            
            if(max < number[j] ){
                max = number[j];
                idx = j;
            }
        }
        startidx = idx+1;
        answer+= max;
    }
    return answer;
}