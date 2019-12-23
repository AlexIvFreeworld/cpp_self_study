#include <iostream>
using namespace std;
int main() {
	int a = 123;
	char ch_1[100] = "test a";
	char ch_2[100] = "test (a)";


//	char ch_3[100] = 'test a'; ошибка на этапе ввода "слишком много знаков в символьной константе"
	string str_1 = "test a";
//	string str_2 = 'test a'; ошибка на этапе ввода "слишком много знаков в символьной константе"
	string str_3 = "test (a)";
	cout << ch_1 << endl;
	cout << ch_2 << endl;
	cout << str_1 << endl;
	cout << str_3 << endl;
	cout << ch_1 + a << endl;
//	cout << str_1 + a << endl; ошибка отсутствует оператор для этих операндов
}