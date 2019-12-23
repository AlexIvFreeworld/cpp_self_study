#include <iostream>
#include <list>
using namespace std;

int main() {
	list<char> lst;
	for (int i = 0; i < 10; i++) {
		lst.push_back('A' + i);
	}
	cout << "Size list = " << lst.size() << endl;
	for (char v : lst) {
		cout << v << " ";
	}
	cout << endl;
	list<char>::iterator p;
	//while (!lst.empty()) {
	//	p = lst.begin();
	//	cout << *p << " ";
	//	lst.pop_front();
	//}
	//cout << endl;
	p = lst.begin();
	while (p != lst.end()) {
		cout << *p << " ";
		p++;
	}
	cout << endl;
	list<char> revlst;
	while (!lst.empty()) {
	p = lst.begin();
	revlst.push_front(*p);
	lst.pop_front();
}
	for (char v : revlst) {
		cout << v << " ";
	}
	cout << endl;
	cout << "-----------------------------------" << endl;
	list<char> randlst;
	for (int i = 0; i < 10; i++) {
		randlst.push_back('A' + rand()%26);
	}
	cout << "Size randlist = " << randlst.size() << endl;
	for (char v : randlst) {
		cout << v << " ";
	}
	cout << endl;
	randlst.sort();
	cout << "Randlist after sort " << endl;
	for (char v : randlst) {
		cout << v << " ";
	}
	cout << endl;
	cin.get();
	return 0;
}