#include <iostream>
using namespace std;
class box {
	double a;
	double b;
	double c;
	double V;
public:
	box(double a_, double b_, double c_);
	double calc_V();
	void show();
};
box::box(double a_, double b_, double c_) {
	a = a_;
	b = b_;
	c = c_;
	V = a * b * c;
}
double box::calc_V() {
	return V;
}
void box::show() {
	cout << a << "*" << b << "*" << c << " = " << V << endl;
}
int main() {
	box b1(1.00, 5.00, 2.00);
	b1.show();
	cout << b1.calc_V() << endl;
	cin.get();
	return 0;
}