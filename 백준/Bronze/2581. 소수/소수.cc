#include <iostream>
using namespace std;

int main() {
	int m,n;
	int sum = 0;
	int cnt = 0;
	int c = 0;
	int first;
	cin>>m;
	cin>>n;
	
	for(int i = m; i <= n; i++){
	    for(int j = 1 ; j <= i;j++){
	        if(i % j == 0){
	            cnt++;
	        }
	    }
	    if(cnt == 2){
	        if (c == 0){
	            c = 1;
	            first = i;
            }
	        sum += i;
	    }
	    cnt = 0;
	 
	}
	if(sum == 0)
	    cout<<"-1"<<endl;
	else
    	cout<<sum<<endl<<first<<endl;
	
	return 0;
}