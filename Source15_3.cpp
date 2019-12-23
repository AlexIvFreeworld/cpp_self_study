#include <iostream>
using namespace std;
struct man {
	char name[100];
	int age;
};
int main() {
	man ivan = { "Ivan", 25 };
	man igor = { "Igor", 33 };
	cout << ivan.name << endl;
	cout << ivan.age << endl;
	man *p;
	p = &ivan;
	p->age = 40;
	p->name[0] = 'L';
	cout << p->age << endl;
	cout << p->name << endl;
	int end_;
	cin >> end_;
	return (0);
}