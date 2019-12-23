#include <iostream>
using namespace std;
int my_abs(int n);
long my_abs(long n);
double my_abs(double n);
void my_date(const char date[]);
void my_date(int month, int day, int year);
int my_f(int n);
int my_f(int n, int m);
int my_sroot(int n);
long my_sroot(long n);
double my_sroot(double n);
int my_min(int n, int m);
char my_min(char n, char m);
double my_min(double n, double m);
int main() {
	cout << my_abs(-10) << endl;
	cout << my_abs(-10L) << endl;
	cout << my_abs(-10.01) << endl;
	cout << "-----------------------------------------------------------" << endl;
	my_date("23/08/1972");
	my_date(8, 23, 1972);
	cout << "-----------------------------------------------------------" << endl;
	cout << my_f(12) << endl;
	cout << my_f(12, 45) << endl;
	cout << "-----------------------------------------------------------" << endl;
	cout << my_sroot(25) << endl;
	cout << my_sroot(25L) << endl;
	cout << my_sroot(25.49) << endl;
	cout << "-----------------------------------------------------------" << endl;
	cout << my_min(4, 7) << endl;
	cout << my_min('9', '7') << endl;
	cout << my_min(4.02, 7.05) << endl;
	int end_;
	cin >> end_;
	return (0);
}
int my_abs(int n) {
	//cout << "In the whole abs()\n";
	return n < 0 ? -n : n;
}
long my_abs(long n) {
	//cout << "In the long whole abs()\n";
	return n < 0 ? -n : n;
}
double my_abs(double n) {
	//cout << "In the real double abs()\n";
	return n < 0 ? -n : n;
}
void my_date(const char date[]) {
	cout << "Date is : " << date << endl;
}
void my_date(int month, int day, int year) {
	cout << "DAte is " << day << "/" << month << "/" << year << endl;
}
int my_f(int n) {
	return n;
}
int my_f(int n, int m) {
	return n+m;
}
int my_sroot(int n) {
	return sqrt(n);
}
long my_sroot(long n) {
	return sqrt(n);
}
double my_sroot(double n) {
	return sqrt(n);
}
int my_min(int n, int m) {
	return n < m ? n : m;
}
char my_min(char n, char m) {
	return n < m ? n : m;
}
double my_min(double n, double m) {
	return n < m ? n : m;
}