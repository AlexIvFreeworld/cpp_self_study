#include <iostream>
#include <string>
#include <algorithm>
#pragma warning(disable : 4996)
using namespace std;

int main() {
	string str1("This is checking");
	string str2("ABCDEFGHIJK");
	cout << "Source strings : " << endl;
	cout << str1 << endl;
	cout << str2 << endl;
	cout << "Inserting str2 in str1" << endl;
	str1.insert(4, str2); // 4 - is the position for inserting
	cout << str1 << endl;
	cout << "Deleting seven simbols from str1" << endl;
	str1.erase(4, 7);
	cout << str1 << endl;
	cout << "Replacing eight simbols from str1 to simbols from str2" << endl;
	str1.replace(4, 8, str2);// не заменились три символа, просто сдвинулись
	//потому что заменяется всей строкой
	cout << str1 << endl;
	string str3("123456789");
	string str4("ABCDEFGHI");
	cout << str3 << endl;
	cout << str4 << endl;
	str3.replace(2, 2, str4, 0,2);
	cout << str3 << endl;
	cin.get();
	return 0;
}