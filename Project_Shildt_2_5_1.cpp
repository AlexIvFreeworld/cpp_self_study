#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;
union bits {
	bits(double n);
	void show_bits();
	double d;
	char c[8];// Why this c?
};
bits::bits(double n) {
	d = n;
}
void bits::show_bits() {
	for (int j = 7; j >= 0; j--) {
		cout << "\nBinary byte representation " << j << ":";
		for (int i = 128; i; i >>= 1) {
			if (i & c[j]) cout << "1";// Why this c[j]?
			else cout << "0";
		}
		cout << "   "<< d << endl;
	}
}
union var {
	int a;
	char b;
	double c;
};
int main() {
	bits ob(1991.829);
	ob.show_bits();
	cout << "\n----------------------------------------------------------------------" << endl;
	//int D = 123;
	//cout << sizeof(double) << endl;
	//cout << sizeof(int) << endl;
	//cout << sizeof(char) << endl;
	//cout << sizeof(float) << endl;
	//cout << sizeof(D) << endl;
	cout << "----------------------------------------------------------------------" << endl;
	var A, B;
	A.a = 10;
	//A.b = 'B';
	for (int i = 0; i <= 255; i++) {
		A.a = i;
		cout << "a = " << A.a << "  b = " << A.b << endl;
	}
	A.c = 15.01;
	for (int i = 0; i <= 10; i++) {
		cout << "c = " << A.c << "  a = " << A.a << endl;
		A.c++;
	}
	int G = 255;
	int K = 8;
	cout << (G & K) << endl;
	cout << (G | K) << endl;
	cin.get();
	return 0;
}