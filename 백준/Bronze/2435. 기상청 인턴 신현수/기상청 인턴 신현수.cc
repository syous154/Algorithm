#include <iostream>
#include <limits.h>
using namespace std;
 
int main(){
	int n, k; 
	cin>>n>>k;
	int sum[n+1] = {0}; 
	int hot;
	for(int i=1; i<=n; i++){
		cin>>hot;
		sum[i] = hot +sum[i-1];
	}
	int max = INT_MIN;
	
	for(int i = k; i<=n; i++){
		if(max < sum[i] - sum[i-k])
		max = sum[i] - sum[i-k];
	}
	
	cout<<max<<'\n';
	
	return 0;
}