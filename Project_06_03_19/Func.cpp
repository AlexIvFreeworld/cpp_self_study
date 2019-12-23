#include "Header.h";
void enter_staff() {
	int choice;// This comment /*comment inside*/
	do {
		int h;
		float rate;
		cout << "\nEnter h : ";
		cin >> h;
		cout << "\nEnter rate : ";
		cin >> rate;
		float sum = f_pay(h, rate);
		show_f_pay(sum);
		cout << "\nElse? yes - 0, no - any key ";
		cin >> choice;
	} while (choice == 0);
}
float f_pay(int h, float rate) {
	float sum;
	sum = h * rate;
	return (sum);
}
void show_f_pay(float sum) {
	cout << "Your pay = :" << sum << endl;
}