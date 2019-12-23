#include <iostream>
using namespace std;
#include <cstdio>
#pragma warning(disable : 4996)
class samp {
	char s[80];
public:
	void show() {
		cout << s << endl;
	}
		void set(char *str) {
			strcpy(s, str);
		}
};
samp input() {
	char s[80];
	samp str;
	cout << "Enter line ";
	gets_s(s);//Копирует строку с пробелами аналог getline for string
	str.set(s);
	return str;
}
int main (){
	samp ob;
	ob = input();
	ob.show();
	cin.get();
	return 0;
}