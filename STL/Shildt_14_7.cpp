#include <iostream>
#include <string>
#include <algorithm>
#pragma warning(disable : 4996)
using namespace std;

int main() {
	string str1("string representation");
	string str2("second string");
	string str3;
	str3 = str1;
	cout << str3 << " / " << str1 << endl;
	str3 = str1 + str2;
	cout << str3 << endl;
	if (str3 > str1) cout << "str3 > str1" << endl;
	if (str3 == str1 + str2) cout << "str3 = str1 + str2" << endl;
	str1 = "This is a normal line";
	cout << str1 << endl;
	string str4(str1);
	cout << str4 << endl;
	cout << "Enter any string : " << endl;
	//cin >> str4; //до первого пробела
	getline(cin, str4);
	cout << str4 << endl;
	char *ch = (char*)str4.c_str();
	const char *ch2 = str4.c_str();
	cout << ch << endl;
	cin.get();
	return 0;
}