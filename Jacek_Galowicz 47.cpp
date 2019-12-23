#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template <typename T>
void quick_remove_at(vector<T> &v, size_t idx) {
	if (idx < v.size()) {
		v[idx] = move(v.back());
		v.pop_back();
	}
}
template <typename T>
void quick_remove_at(vector<T> &v, typename vector<T>::iterator it) {
	if (it != v.end()) {
		*it = move(v.back());
		v.pop_back();
	}
}
int main() {
	vector<int> v{ 123, 456, 789, 100, 200 };
	quick_remove_at(v, 2);
	for (int i : v) {
		cout << i << ", ";
	}
	cout << "\n";
	quick_remove_at(v, find(v.begin(),v.end(),123));
	for (int i : v) {
		cout << i << ", ";
	}
	cout << "\n";
	cin.get();
	return 0;
}