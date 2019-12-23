#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#pragma warning(disable : 4996)
using namespace std;
int main() {
    vector<int> v;
	list<int> L(4);
	for (int i = 0; i < 10; i++){
		v.push_back(i+1);
	}
	cout << "Source list" << endl;
	for (size_t val : v) {
		cout << val << " ";
	}
	cout << endl;
	cout << "In the List after copyring" << endl;
	list<int>::iterator p = L.begin();
	vector<int>::iterator pTv = v.begin() + 4;
	copy(v.begin(), pTv, p);
		for (size_t val : L) {
		cout << val << " ";
	}
	cout << endl;
	cin.get();
	return 0;
}