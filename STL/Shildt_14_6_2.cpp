#include <iostream>
#include <map>
#include <vector>
#include <cstring>
#include <algorithm>
#pragma warning(disable : 4996)
using namespace std;
bool Sort_Down(int a, int b) {
	return a>b;
}
int main() {
	vector<int> v_start = {4,2,1,5,7,3,8,6};
	cout << "Source sequence " << endl;
	for (size_t val : v_start) {
		cout << val << " ";
	}
	cout << endl;
	sort(v_start.begin(), v_start.end());
	cout << "Sequence after sorting" << endl;
	for (size_t val : v_start) {
		cout << val << " ";
	}
	cout << endl;
	sort(v_start.begin(), v_start.end(),Sort_Down);
	cout << "Sequence after sorting with Sort_Down" << endl;
	for (size_t val : v_start) {
		cout << val << " ";
	}
	cout << endl;
	vector<char> ch1 = { 'A', 'B', 'C', 'D' };
	vector<char> ch2 = { 'E', 'F', 'G', 'H' };
	vector<char> ch_res(8);
	cout << "Sequence first" << endl;
	for (char val : ch1) {
		cout << val << " ";
	}
	cout << endl;
	cout << "Sequence second" << endl;
	for (char val : ch2) {
		cout << val << " ";
	}
	cout << endl;
	//sort(ch2.begin(), ch2.end());
	merge(ch1.begin(), ch1.end(), ch2.begin(), ch2.end(), ch_res.begin());
	cout << "Sequence result after merging" << endl;
	for (char val : ch_res) {
		cout << val << " ";
	}
	cout << endl;
	cin.get();
	return 0;
}