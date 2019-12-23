#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	vector<string> input;
	string temp;
	while (cin >> temp && temp != "quit")
		input.push_back(temp);
	vector<string>::iterator want = find(input.begin(), input.end(), string("bonus"));
	cout << endl;
	for (unsigned int i = 0; i < input.size(); i++) cout << input[i] << " ";
	cout << endl;
	if (want != input.end()) {
		vector<string>::reference r = *want;
		r = "bogus";
	}
	for (unsigned int i = 0; i < input.size(); i++) cout << input[i] << " ";
	cout << endl;
	vector<string>::value_type s1 = input[0];//новый объект string копия input[0]
	vector<string>::reference s2 = input[0];//ссылка на объект string input[0]
	cout << &input[0] << " input[0] = " << input[0] << endl;
	cout << &s1 << " s1 = "<< s1 << endl;
	cout << &s2 << " s2 = " << s2 << endl;

	cin.get();
	return 1;
}