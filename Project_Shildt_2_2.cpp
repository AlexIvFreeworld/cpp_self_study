//#include <iostream>
//using namespace std;
//#define SIZE 10
//class stack {
//	char stk[SIZE];
//	int tos;
//	char who;
//public:
//	stack(char who_);
//	void push(char ch);
//	char pop();
//	void show();
//	~stack();
//};
//stack::stack(char who_) {
//	who = who_;
//	tos = 0;
//	cout << "The constructor " << who << endl;
//}
//void stack::push(char ch) {
//	if (tos == SIZE) {
//		cout << "Stack " << who << " is full" << endl;
//		return;
//	}
//	else {
//		stk[tos] = ch;
//		tos++;
//	}
//}
//char stack::pop() {
//	if (tos == 0) {
//		cout << "Stack "<<who<<" is empty" << endl;
//		return 0;
//	}
//	else {
//		tos--;
//		return stk[tos];
//	}
//}
//void stack::show() {
//	for (int i = 0; i < SIZE; i++) {
//		cout << stk[i] << ",";
//	}
//	cout << "TOS "<< tos << endl;
//}
//stack::~stack() {
//	cout << "The DESTRUCTOR " << who << endl;
//}
//void func();
////int main() {
////	func();
////	cin.get();
////	return 0;
////}
//void func() {
//	stack s1('A'), s2('B');
//	s1.push('a');
//	s1.push('b');
//	s1.push('c');
//	s1.show();
//	cout << s1.pop() << endl;
//	cout << s1.pop() << endl;
//	cout << s1.pop() << endl;
//	cout << s1.pop() << endl;
//	s1.show();
//}