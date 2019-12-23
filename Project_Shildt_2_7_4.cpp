#include <iostream>
using namespace std;
class myClass {
	int i, j;
public:
	myClass(int x, int y) {
		i = x;
		j = y;
	}
	void show() {
		cout << i << " " << j << endl;
	}
};
class prompt {
	int count;
public:
	prompt() {
		cout << "Enter any number : ";
		cin >> count;
	}
	~prompt() {
		for (int i = 1; i <= count; i++) {
			cout << "*";
		}
		cout << endl;
	}
};
void func();
int main() {
	myClass count(2, 3);
	count.show();
	func();
	cin.get();
	return 0;
}
void func() {
	prompt PT;
}