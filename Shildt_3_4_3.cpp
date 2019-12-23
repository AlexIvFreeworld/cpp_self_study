//3.4. Дружественные функции: обзор
#include <iostream>
using namespace std;
class Pr2;
class Pr1 {
	bool printing;
public:
	Pr1(bool status) {
		printing = status;
	}
	void set_status(bool status) {
		printing = status;
	}
	friend bool inuse(Pr1 obj1, Pr2 obj2);
};
class Pr2 {
	bool printing;
public:
	Pr2(bool status) {
		printing = status;
	}
	void set_status(bool status) {
		printing = status;
	}
	friend bool inuse(Pr1 obj1, Pr2 obj2);
};
bool inuse(Pr1 obj1, Pr2 obj2) {
	return (obj1.printing == 1 || obj2.printing == 1) ? true : false;
}
int main()
{
	Pr1 ob1(false);
	Pr2 ob2(false);
	cout << ((inuse(ob1, ob2) == false) ? "Printer is free" : "Printer is not free") << endl;
	ob1.set_status(true);
	cout << ((inuse(ob1, ob2) == false) ? "Printer is free" : "Printer is not free") << endl;
	cin.get();
	return 0;
}