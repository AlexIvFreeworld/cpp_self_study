#include <iostream>
#include <map>
#include <vector>
#include <cstring>
#include <algorithm>
#pragma warning(disable : 4996)
using namespace std;
int xForm(int i) {
	return i * i;
}
int main() {
	vector<int> v, v2(20);
	for (int i = 0; i < 20; i++) {
		if (i % 2) v.push_back(1);
		else v.push_back(2);
	}
	cout << "Sequence : " << endl;
	for (size_t val : v) {
		cout << val << " ";
	}
	cout << endl;
	remove_copy(v.begin(), v.end(), v2.begin(), 1);
	cout << "Result : " << endl;
	for (size_t val : v2) {
		cout << val << " ";
	}
	cout << endl;
	vector<int> v3;
	for (int i = 0; i < 10; i++) {
		v3.push_back(i);
	}
	cout << "Source sequence : " << endl;
	for (size_t val : v3) {
		cout << val << " ";
	}
	cout << endl;
	reverse(v3.begin(), v3.end());
	cout << "Reverse sequence : " << endl;
	for (size_t val : v3) {
		cout << val << " ";
	}
	vector<int> v4;
	for (int i = 0; i < 10; i++) {
		v4.push_back(i);
	}
	cout << endl;
	cout << "Source sequence : " << endl;
	for (size_t val : v4) {
		cout << val << " ";
	}
	cout << endl;
	transform(v4.begin(), v4.end(), v4.begin(), xForm);
	cout << "Modified List Content : " << endl;
	for (size_t val : v4) {
		cout << val << " ";
	}
	cout << endl;
	cin.get();
	return 0;
}