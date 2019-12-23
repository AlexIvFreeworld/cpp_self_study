#include <iostream>
using namespace std;
struct man {
	char name[100];
	int age;
};
void show(man a);
man put();
void main() {
	man a = { "Ivan", 19 };
	man b;
	show(a);
	b = put();
	show(b);
	int end_;
	cin >> end_;
}
void show(man a) {
	cout << a.name << endl;
	cout << a.age << endl;
}
man put() {
	man temp;
	cout << "Enter name :" << endl;
	cin >> temp.name;
	cout << "Enter age :" << endl;
	cin >> temp.age;
	return temp;
}