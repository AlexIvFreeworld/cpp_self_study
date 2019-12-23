#include <iostream>
using namespace std;
union bits {
	bits(int a_);
	short int a;
	char b[2];
	void show_bits();
	void rotate_bits();
};
bits::bits(int a_) {
	a = a_;
}
void bits::show_bits() {
	for (int i = 1; i >= 0; i--) {
		cout << "This is bait - " << i << "  ";
		for (int j = 128; j; j >>= 1) {
			if (j & b[i]) cout << 1;
			else cout << 0;
		}
		cout << endl;
	}
}
void bits::rotate_bits() {
	char ch;
	ch = b[1];
	b[1] = b[0];
	b[0] = ch;
}
int main() {
	bits A(255);
	cout << "Original a "<<A.a << endl;
	A.show_bits();
	A.rotate_bits();
	A.show_bits();
	cout <<"a with potate " << A.a << endl;
	cin.get();
	return 0;
}
