#include <iostream>
using namespace std;
inline int my_abs(int a);
inline double my_abs(double a);
inline long int my_abs(long int a);
inline int even(int n) {
	return (n % 2);
}
int main() {
	cout << my_abs(-1310) << endl;
	cout << my_abs(-15.01) << endl;
	cout << my_abs(-235L) << endl;
	int n = 11;
	if (!even(n)) cout << "Number " << n <<  " is even ";
	else cout << "Number " << n << " is not even ";
	cin.get();
	return 0;
}
inline int my_abs(int a) {
	return a > 0 ? a : -a;
}
inline double my_abs(double a) {
	return a > 0 ? a : -a;
}
inline long int my_abs(long int a) {
	return a > 0 ? a : -a;
}