#include <iostream>
#include <map>
#include <vector>
#include <cstring>
#include <algorithm>
#pragma warning(disable : 4996)
using namespace std;
bool even(int x) {
	return !(x % 2);
}
bool all_elem(int x) {// унарный предикат всегда возвращает true
	return true;
}
int main() {
	vector<int> v;
	for (int i = 0; i < 20; i++) {
		if (i % 2) v.push_back(1);
		else v.push_back(2);
	}
	cout << "Sequence " << endl;
	for (size_t val : v) {
		cout << val << " ";
	}
	cout << endl;
	int n;
	n = count(v.begin(), v.end(), 1);
	cout << n << " elements equal 1" << endl;
	n = count_if(v.begin(), v.end(), even);
	cout << n << " even elements" << endl;
	n = count_if(v.begin(), v.end(), all_elem);// так ьожно посчитать количество всех элементов
	cout << n << " all elements" << endl;
	cin.get();
	return 0;
}