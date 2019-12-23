#include <iostream>
#include <ctime>
#pragma warning(disable : 4996)
using namespace std;
class t_and_d {
	time_t t;
	struct tm *local;
public:
	t_and_d();
	void show();
	~t_and_d();
};
t_and_d::t_and_d() {
	t = time(NULL);
	local = localtime(&t);
}
void t_and_d::show() {
	cout << asctime(local) << endl;
}
t_and_d ::~t_and_d() {
	delete local;
}
void func();
int main() {
	time_t t;
	struct tm *local;
	t = time(NULL);
	local = localtime(&t);
	cout << asctime(local) << endl;
	time_t t2;
	t2 = time(NULL);
	cout << ctime(&t2) << endl;
	cout << local->tm_hour << "/" << local->tm_min << "/" << local->tm_sec << endl;
	//func();
	cin.get();
	return 0;
}
void func() {
	t_and_d t1;
	t1.show();
}