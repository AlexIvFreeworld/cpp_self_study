#include <iostream>
using namespace std;
#define PI 3.14
class area_c1 {
public:
	double height;
	double width;
};
class rectangle : public area_c1 {
public:
	rectangle(double height_, double width_);
	double area();
};
class isosceles : public area_c1 {
public:
	isosceles(double height_, double width_);
	double area();
};
rectangle::rectangle(double height_, double width_) {
	height = height_;
	width = width_;
}
double rectangle::area() {
	double S = height * width;
	return S;
}
isosceles::isosceles(double height_, double width_) {
	height = height_;
	width = width_;
}
double isosceles::area() {
	double S = height * width/2;
	return S;
}
class cylinder : public area_c1 {
public:
	cylinder(double height_, double width_) {
		height = height_;
		width = width_;
	}
	double area() {
		return (2 * PI*(width / 2) * height) + (2 * PI*(width / 2)*(width / 2));
	}
};
int main() {
	//rectangle R_1(10.00,5.00);
	//isosceles IS_1(2.00, 3.00);
	//cout << R_1.area() << endl;
	//cout << IS_1.area() << endl;
	//rectangle *P;
	//P = &R_1;
	//cout << P->area() << endl;
	cylinder C(2.00, 2.00);
	cout << C.area() << endl;
	cin.get();
	return 0;
}