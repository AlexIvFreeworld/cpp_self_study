#include <iostream>
#include <map>
using namespace std;

int main() {
	map<char, int> m;
	for (int i = 0; i < 10; i++) {
		m.insert(pair<char, int>('A' + i, i));
	}
	char ch;
	cout << "Enter any key : ";
	cin >> ch;
	map<char, int>::iterator p;
	p = m.find(ch);
	if (p != m.end()) {
		cout << p->first << " - " << p->second << endl;
	}
	else {
		cout << "The map has not this key " << endl;
	}
	map<char, int> m_2;
	for (int i = 0; i < 10; i++) {
		m_2.insert(make_pair((char)('A' + i), i));//если не приводить к char тоже работает правильно
	}
	cout << "Enter any key : ";
	cin >> ch;
	map<char, int>::iterator p_2;
	p_2 = m_2.find(ch);
	if (p_2 != m_2.end()) {
		cout << p_2->first << " - " << p_2->second << endl;
	}
	else {
		cout << "The map has not this key " << endl;
	}
	cin.get();
	cin.get();
	return 0;
}