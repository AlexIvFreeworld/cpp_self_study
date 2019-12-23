#include <iostream>
#include <map>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;
class Word {
	char str[20];
public:
	Word() {
		strcpy(str, "");
	}
	Word(const char* s) {
		strcpy(str, s);
	}
	char* Get() {
		return str;
	}
};
class Opposite {
	char str[20];
public:
	Opposite() {
		strcpy(str, "");
	}
	Opposite(const char* s) {
		strcpy(str, s);
	}
	char* Get() {
		return str;
	}
};
bool operator<(Word a, Word b) {
	return strcmp(a.Get(), b.Get()) < 0;
}
int main() {
	map<Word, Opposite> m;
	m.insert(pair<Word, Opposite>("Yes", "No"));
	m.insert(make_pair("Good", "Bed"));
	m.insert(make_pair("Left", "Right"));
	m.insert(make_pair("Up", "Down"));
	char str[80];
	cout << "Enter word : ";
	gets_s(str);
	map<Word, Opposite>::iterator p;
	p = m.find(Word(str));
	if (p != m.end()) {
		cout << "Antonym - " << p->second.Get();
	}
	else {
		cout << "This word is not exist in the list " << endl;
	}
	cin.get();
	return 0;
}