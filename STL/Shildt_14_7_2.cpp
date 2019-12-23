#include <iostream>
#include <string>
#include <map>
#include <list>
#include <algorithm>
#pragma warning(disable : 4996)
using namespace std;
bool Sort_Down(string a, string b) {
	return (a > b)? true:false;
}
int main() {
	map<string, string> m;
	m.insert(make_pair("yes", "no"));
	m.insert(make_pair("good", "bed"));
	m.insert(make_pair("left", "right"));
	m.insert(make_pair("up", "down"));
	string s;
	cout << "Enter some word in (yes, good, left, up)" << endl;
	getline(cin, s);
	map<string, string>::iterator p;
	p = m.find(s);
	if (p != m.end()) cout << "Antonym - " << p->second;
	else cout << "The list has not this word " << endl;
	cout << endl;
	list<string> L = {"one", "two", "three", "four","five","six", "seven", "eight", "nine", "ten"};
	for (string s : L) {
		cout << s << " ";
	}
	cout << endl;
	L.sort();
	for (string s : L) {
		cout << s << " ";
	}
	cout << endl;
	cin.get();
	return 0;
}