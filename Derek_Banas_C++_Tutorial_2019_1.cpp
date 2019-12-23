#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {

	cout << "Hello world" << endl;
	bool married = true;
	char myGrade = 'A';

	cout << "Min unsigned short int " << numeric_limits<unsigned short int>::min() << endl;
	cout << "Max unsigned short int " << numeric_limits<unsigned short int>::max() << endl;
	cout << "Min short int " << numeric_limits<short int>::min() << endl;
	cout << "Max short int " << numeric_limits<short int>::max() << endl;
	cout << "Min int " << numeric_limits<int>::min() << endl;
	cout << "Max int " << numeric_limits<int>::max() << endl;
	cout << "Min long  " << numeric_limits<long>::min() << endl;
	cout << "Max long  " << numeric_limits<long>::max() << endl;
	cout << "Min long long  " << numeric_limits<long long>::min() << endl;
	cout << "Max long long  " << numeric_limits<long long>::max() << endl;
	cout << "Min float  " << numeric_limits<float>::min() << endl;
	cout << "Max float  " << numeric_limits<float>::max() << endl;
	cout << "Min double  " << numeric_limits<double>::min() << endl;
	cout << "Max double  " << numeric_limits<double>::max() << endl;
	cout << "Min long double  " << numeric_limits<long double>::min() << endl;
	cout << "Max long double  " << numeric_limits<long double>::max() << endl;

	float f1 = 1.1111111;
	float f2 = 1.1111111;
	printf("Sum %.7f\n", (f1 + f2));

	double d1 = 1.1111111111111111;
	double d2 = 1.1111111111111111;
	printf("Sum %.16f\n", (d1 + d2));

	auto whatAmI = true;
	cout << "int byte : " << sizeof(int) << endl;

	printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "Hi");

	return 0;
}