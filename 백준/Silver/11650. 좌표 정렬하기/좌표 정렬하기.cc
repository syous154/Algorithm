#include <iostream>
#include <algorithm>
using namespace std;
struct Point{
    int x,y;
};
bool compare(Point now, Point last)
{
	if (now.x > last.x) return false;
	if (now.x == last.x && now.y > last.y) return false;
	else return true;
}
int main()
{
    struct Point p[100000];
    int n;
    
    cin>>n;
    
    for(int i = 0 ; i < n ; i++){
        cin>>p[i].x>>p[i].y;
    }
    sort(p,p+n,compare);
    for(int i = 0 ; i <  n  ; i++){
        cout<<p[i].x<<" "<<p[i].y<<'\n';
    }
    
    return 0;
}