#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
template<typename Bag>
typename Bag::value_type min(const Bag& b) {
	typename Bag::const_iterator it;
	typename Bag::value_type m = *b.begin();
	for (it = b.begin(); it != b.end(); ++it) {
		if (*it < m) m = *it;
	}
	return m;
}
void show(int n);
int main() {
	vector<int> temperaturs, vt;
	temperaturs = { 30,50,40 };
	vt = temperaturs;
	int coldest = min(temperaturs);
	cout << "coldest = " << coldest << endl;
	for_each(temperaturs.begin(), temperaturs.end(), [](int n) {cout << n << " "; });
	cout << "\n--------------------------------------------------------" << endl;
	for_each(temperaturs.begin(), temperaturs.end(), show);
	cout << "\n--------------------------------------------------------" << endl;
	for_each(vt.begin(), vt.end(), show);
	vt.insert(vt.begin()+1, 99);
	cout << "\n--------------------------------------------------------" << endl;
	for_each(vt.begin(), vt.end(), show);
	cout << "\n--------------------------------------------------------" << endl;
	vector<int>::iterator it = vt.begin()+1;
	for_each(it, vt.end(), show);
	cout << "\n--------------------------------------------------------" << endl;
	it = find(vt.begin(), vt.end(), 99);
	cout << *it << endl;
	cin.get();
	return 1;
}
void show(int n) {
	cout << n << " ";
}