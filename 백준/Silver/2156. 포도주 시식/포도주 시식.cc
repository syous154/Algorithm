#include <iostream>
#include <vector>
using namespace std;
int n,val;	
vector<int> food;
vector<int> food_stack;

void input(){
	cin >> n;
	for(int i = 0 ; i < n; i++){
		cin>>val;
		food.push_back(val);
		food_stack.push_back(0);
	}
}
int solution(){
	food_stack[0] = food[0];
	food_stack[1] = food[0] + food[1];
	
	for(int i = 2; i < n;i++){
		int val = max(food_stack[i - 1], food_stack[i - 2] + food[i]);
		food_stack[i] = max(val, food_stack[i - 3] + food[i - 1] + food[i]);
	}
	cout << food_stack[n-1] << '\n';
	return 0;
}
int main() {
	input();
	solution();
	return 0;
}