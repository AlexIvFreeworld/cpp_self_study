#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> v;
	int i;
	cout << "Size = " << v.size() << endl;
	for (i = 0; i < 10; i++) v.push_back(i);
	cout << "New Size = " << v.size() << endl;
	for (int val : v) cout << val << ' ';
	cout << endl;
	for (i = 0; i < 10; i++) v.push_back(i+10);
	cout << "New Size = " << v.size() << endl;
	for (int val : v) cout << val << ' ';
	cout << endl;
	for (int i = 0; i < v.size(); i++) v[i] = v[i] + v[i];
	for (int val : v) cout << val << ' ';
	cout << endl;
	vector<int>::iterator p = v.begin();
	while (p != v.end()) {
		cout << *p << ' ';
		p++;
	}
	cout << endl;
	cout << "------------------------------------------------------" << endl;
	vector<int> v1(5, 1);
	cout << "Size = " << v1.size() << endl;
	for (int val : v1) cout << val << ' ';
	cout << endl;
	vector<int>::iterator p2 = v1.begin();
	p2 += 2;
	v1.insert(p2, 10, 9);
	cout << "New Size = " << v1.size() << endl;
	for (int val : v1) cout << val << ' ';
	cout << endl;
	p2 = v1.begin()+=2;
	v1.erase(p2, p2 + 10);
	cout << "New Size after erasing = " << v1.size() << endl;
	for (int val : v1) cout << val << ' ';
	cout << endl;
	cin.get();
	return 0;
}