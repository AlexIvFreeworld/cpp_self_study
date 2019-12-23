#include <iostream>
using namespace std;
#include <cstdio>
#pragma warning(disable : 4996)
class samp {
	char *s;
public:
	samp() {
		s = '\0';
		cout << "Constructor " << this << endl;
	}
	~samp() {
		if (s) delete s;
		cout << "Destructor memory release " << this << endl;
	}
	void show() {
		cout << s << endl;
	}
	void set(char *str) {
		s = new char[strlen(str) + 1];
		if (!s) {
			cout << "memory allocation error" << endl;
			exit(1);
		}
		else {
			strcpy(s, str);
		}
	}
};
samp input() {
	char s[80];
	samp str;
	cout << "Enter line ";
	gets_s(s);
	str.set(s);
	return str;
}
int main (){
	samp ob;
	ob = input();//здесь ошибка, деструктор возвращаемого объекта обращается к уже удаленной памяти в куче
	//ранее удалена при завершении локальной функции input()
	ob.show();
	cin.get();
	return 0;
}