#include <iostream>
#include <list>
using namespace std;

int main() {
	list<char> L_1, L_2;
	for (int i = 0; i < 10; i += 2) {
		L_1.push_back('A' + i);
	}
	for (int i = 1; i < 11; i += 2) {
		L_2.push_back('A' + i);
	}
	cout << "Show first list" << endl;
	for (char ch : L_1) {
		cout << ch << " ";
	}
 	cout << endl;
	cout << "Show second list" << endl;
	for (char ch : L_2) {
		cout << ch << " ";
	}
	cout << endl;
	cout << "Show first list after merging" << endl;
	L_1.merge(L_2);
	for (char ch : L_1) {
		cout << ch << " ";
	}
	cout << endl;
	cout << "Show second list after merging" << endl;
	for (char ch : L_2) {
		cout << ch << " ";
	}
	cout << endl;
	if (L_2.empty()) {
		cout << "The second list is empty " << endl;
	}
	cin.get();
	return 0;
}