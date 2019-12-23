#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;
struct st_type {
	st_type(double b, char n[]) {
		balance = b;
		strcpy(name, n);
	}
	void show() {
		cout << "Name: " << name;
		cout << ":$ " << balance;
		if (balance < 0.0) cout << "***";
		cout << "\n";
	}
private:
	double balance;
	char name[40];
};
int main() {
	char J[40] = "Jonson";
	char H[40] = "Herdics";
	//char *PJ = &J;
	st_type acc1(100.00, J);
	st_type acc2(-12.34, H);
	cout << J << endl;
	cout << &J << endl;
	acc1.show();
	acc2.show();
	cin.get();
	return 0;
}