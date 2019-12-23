#include <iostream>
using namespace std;
class myClass {
	int a, b;
public:
	void set(int a_, int b_) {
		a = a_;
		b = b_;
	}
	void show() {
		cout << "a = " << a << " b= " << b << endl;
	}
};
class yourClass {
	int a, b;
public:
	void set(int a_, int b_) {
		a = a_;
		b = b_;
	}
	void show() {
		cout << "a = " << a << " b= " << b << endl;
	}
};

int main() {
	myClass o1, o2;
	o1.set(10, 4);
	o2 = o1;
	o1.show();
	o2.show();
	yourClass o3;
	o3 = o1;//Error different name of classes
	cin.get();
	return 0;
}