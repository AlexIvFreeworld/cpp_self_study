#include <iostream>
#include <ctime>
using namespace std;
class stopwatch {
	clock_t start;
	clock_t stop;
	clock_t start_1;
	clock_t stop_1;
	public:
	stopwatch();
	clock_t f_start();
	clock_t f_stop();
	void show();
	~stopwatch();
};
stopwatch::stopwatch() {
	start = 0;
}
clock_t stopwatch::f_start() {
	start_1 = clock();
	return start_1;
}
clock_t stopwatch::f_stop() {
	stop_1 = clock();
	return stop_1;
}
void stopwatch::show() {
	cout << "Time = " << (stop_1 - start_1) / CLOCKS_PER_SEC << endl;
}
stopwatch::~stopwatch() {
	stop = clock();
	cout << "Time work destructor = " << (stop - start) / CLOCKS_PER_SEC << endl;
}
void myFunc();
int main() {
	char c;
	myFunc();
	cin.get();
	cin.get();
	return 0;
}
void myFunc() {
	char c;
	stopwatch time_1;
	time_1.f_start();
	cin >> c;
	time_1.f_stop();
	time_1.show();
	cin >> c;
}