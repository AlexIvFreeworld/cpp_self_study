#include <iostream>
using namespace std;
char show_word(int n);
char *show_word_2(char *p_arr, int n);
int main() {
	char(*p_show_word)(int);
	p_show_word = show_word;
	int n;
	cout << "Enter n :";
	cin >> n;
	cout << show_word(n) << endl;
	cout << p_show_word(n) << endl;
	char arr[100] = "Ford";
	char *p_arr = arr;
	show_word_2(arr,n);
	puts(arr);
	cout << endl;
	int end_;
	cin >> end_;
	return (0);
}
char show_word(int n) {
	char res[100] = "Hello";
	switch (n)
	{
	case 1:
		;
	default:
		break;
	}
	return (res[n]);
}
char *show_word_2(char *p_arr, int n) {
	char arr_2[100] = "Volga";
	*(p_arr+n) = arr_2[n];
	return (0);
}