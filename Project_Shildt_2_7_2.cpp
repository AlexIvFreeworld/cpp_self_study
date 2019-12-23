#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;
class line {
	int len;
public:
	line(int len_) {
		len = len_;
	}
	void show_line() {
		for (int i = 1; i <= len; i++) {
			cout << "*";
		}
		cout << endl;
	}
	~line(){}
};
int main() {
	line L_1(50);
	L_1.show_line();
	int i = 10;
	long l = 1000000;
	double d = -0.0009;
	cout << i << "" << l << "" << d;
	cout << "\n";
	cin.get();
	return 0;
}