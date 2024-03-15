#include<iostream>
#include<stack>
using namespace std;



int main()
{
	int n;
	stack<int> s;
	int rst[1000000];
	int val[1000000];
	
	cin>>n;
	
	for(int i = 0 ; i < n; i++){
	    cin>>val[i];
	}
	
	for(int i = n-1; i>=0; i--){
	    while(!s.empty() && s.top() <= val[i])
	        s.pop();
	   if(s.empty()) rst[i] = -1;
	   else rst[i] = s.top();
	   
	   s.push(val[i]);
	}
	
	for(int i = 0 ; i < n; i++){
	    cout<<rst[i]<<" ";
	}
	return 0;
}