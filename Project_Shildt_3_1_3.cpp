#include <iostream>
using namespace std;
#define SIZE 100
class queue {//Собственная реализация очереди
	char ch[SIZE];
	int pos_first;
	int pos_end;
public:
	queue();
	void push(char ch_);
	char pop();
	void show();
};
queue::queue() {
	pos_first = 0;
	pos_end = 0;
}
void queue::push(char ch_) {
	if (pos_end == SIZE) {
		cout << "Stack is full" << endl;
		return;
	}
	else {
		ch[pos_end] = ch_;
		pos_end++;
	}
}
char queue::pop() {
	if (pos_first == pos_end) {
		cout << "Stack is empty" << endl;
		return 0;
	}
	else {
		return ch[pos_first++];//Сначала возвращает, потом увеличивает на 1
	}
}
void queue::show() {
	for (int i = 0; i < SIZE; i++) {
		cout << ch[i] << " ";
	}
	cout << endl;
}
int main() {
	queue q1, q2;
	q1.push('A');
	q1.push('B');
	q1.push('C');
	q1.push('D');
	q1.show();
	cout << q1.pop() << endl;
	cout << q1.pop() << endl;
	cout << q1.pop() << endl;
	cout << q1.pop() << endl;
	cout << q1.pop() << endl;
	q1.show();
	q1.push('H');
	q1.push('J');
	q1.push('K');
	q1.show();
	cout << q1.pop() << endl;
	cout << q1.pop() << endl;
	cout << q1.pop() << endl;
	cout << q1.pop() << endl;
	cout << q1.pop() << endl;
	q2 = q1;
	q2.show();
	cout << q2.pop() << endl;
	cin.get();
	return 0;
}
