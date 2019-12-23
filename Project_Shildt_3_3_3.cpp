#include <iostream>
using namespace std;
#include <cstdio>
#pragma warning(disable : 4996)
class who {
	char name;
public:
	who(char name_) {
		name = name_;
		cout << "Create object " << name << " " << this << endl;
	}
	~who() {
		cout << "Delete object " << name << " " << this << endl;
	}
};
who make_who() {
	char name;
	cout << "Enter one symbol ";
	cin >> name;
	who ob(name);//вызывается конструктор для локального объекта
	return ob;//по завершению объект копируется во временную память и вызывается деструктор для локального объекта
}
void f();
int main (){
	f();
	cin.get();
	cin.get();
	return 0;
}
void f() {
	who a('d');
	a = make_who();//после присвоения вызывается деструктор объекта во временной памяти
}