#include <iostream>
using namespace std;
#pragma warning(disable : 4996)
#define SIZE 10
class stack {
	char stck[SIZE];
	int tos;
public:
	stack();
	stack(const stack &obj){
		strcpy(stck, obj.stck);
		tos = obj.tos;
		cout << "Copy Constructor " << this << endl;
	}
	void push(char ch);
	char pop();
	char *get_stch() {
		return stck;
	}
	int get_tos() {
		return tos;
	}
	~stack() {
		cout << "Working DESTRUCTOR of steck " << this << endl;
	}
};
stack::stack() {
	cout << "Working constructor of steck " << this << endl;
	tos = 0;
}
void stack::push(char ch) {
	if (tos == SIZE) {
		cout << "Stack is full" << endl;
		return;
	}
	stck[tos] = ch;
	tos++;
}
char stack::pop() {
	if (tos == 0) {
		cout << "Stack is empty" << endl;
		return 0;
	}
	tos--;
	return stck[tos];
}
void func();
void show_stack(stack o);
int main() {
	func();
	cin.get();
	return 0;
}
void func() {
	stack s1, s2;
	s1.push('A');
	s1.push('B');
	s1.push('C');
	s2 = s1;
	for (int i = 0; i < 3; i++) {
		cout << "symbol from s1 " << s1.pop() << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout << "symbol from s2 " << s2.pop() << endl;
	}
	s1.push('G');
	s1.push('H');
	s1.push('J');
	show_stack(s1);
}
void show_stack(stack o) {
	cout << "start working show_stack " << endl;
	for (int i = 0; i < o.get_tos(); i++) {
		cout << o.get_stch()[i] << " ";
	}
	cout << "\n end working show_stack " << endl;
}