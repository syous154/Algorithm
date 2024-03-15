#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Person{
    public:
    int year;
    int month;
    int day;
    string name;
    Person(int y,int m,int d,string s){
        this->year = y;
        this->month = m;
        this->day = d;
        this->name = s;
    };
    Person();
};
int cmp(Person a, Person b){
    if(a.year == b.year){
        if(a.month == b.month){
            return a.day < b.day;
        }
        else{
            return a.month < b.month;
        }
    }
    else{
        return a.year < b.year;
    }
}
int main()
{
    int n,y,m,d;
    string s;
    vector<Person> v;
    cin>>n;
    for(int i = 0 ; i < n; i++){
        cin>>s>>d>>m>>y;
        v.push_back(Person(y,m,d,s));
    }
    sort(v.begin(),v.end(),cmp);
    
    cout<<v[v.size()-1].name<<'\n'<<v[0].name;
    return 0;
}