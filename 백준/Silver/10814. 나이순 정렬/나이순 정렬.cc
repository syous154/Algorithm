#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Person {
public:
	string name;
	int age;
	int older;
	Person(string a, int b,int o) {
		this->name = a;
		this->age = b;
		this->older = o;
	}
	Person() {}

};
int cmp(Person a, Person b) {
	if (a.age == b.age) {
		return a.older < b.older;
	}
	else {
		return a.age < b.age;
	}
}
int main() {
	int n;
	string name;
	int age;
	vector<Person> person;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		person.push_back(Person(name, age, i));
	}
	sort(person.begin(), person.end(), cmp);
	for (int i = 0; i < n; i++) {
		cout << person[i].age << " " << person[i].name << '\n';
	}
	return 0;
}