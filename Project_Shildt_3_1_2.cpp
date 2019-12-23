#include <iostream>
using namespace std;
#define SIZE 10
class stack {
	char stck[SIZE];
	int tos;
public:
	stack();
	void push(char ch);
	char pop();
	~stack() {
		cout << "Working DESTRUCTOR of steck" << endl;
	}
};
stack::stack() {
	cout << "Working constructor of steck" << endl;
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
}