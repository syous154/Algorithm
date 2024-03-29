#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(string a, string b){
    return a + b > b + a;   // 반환 값이 true이면 a가 b보다 앞에 위치하도록 정렬되며, false이면 b가 a보다 앞에 위치하도록 정렬됩니다.
}
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> v;
    int sum = 0;
    for(int i = 0; i<numbers.size(); i++){
        sum+= numbers[i];
    }
    if(sum == 0){
        answer += "0";
        return answer;
    }
    
    for(int i = 0; i<numbers.size(); i++){
        v.push_back(to_string(numbers[i]));
    }
    
    
    //for(int i = 0 ; i < v.size(); i++){
    //    cout<<v[i]<<' ';
    //}
    //cout<<'\n';
    sort(v.begin(),v.end(), cmp);
    
    //for(int i = 0 ; i < v.size(); i++){
    //    cout<<v[i]<<' ';
    //}
    
    for(int i = 0 ; i < v.size(); i++){
        answer += v[i];
    }
    
    return answer;
}