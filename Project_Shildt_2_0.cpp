#include <iostream>
#include <string>
#pragma warning(disable : 4996)
using namespace std;
class my_class {
	string name;
	string adress;
public:
	void set_name(string N, string A) {
		name = N;
		adress = A;
	}
	void get_name() {
		cout << "Name : " << name << "Adress : " << adress << endl;
	}
};
int rotate(int x);
long rotate(long x);
int main() {
	string str;
	cout << "Enter string " << endl;
	getline(cin, str);
	int size_str = 0;
	int i = 0;
	while (str[i] != '\0') {
		size_str++;
		i++;
	}
	cout << "Size string : " << size_str << endl;
	my_class obj1;
	obj1.set_name("Petrov 1", "Moskow street");
	obj1.get_name();
	cout << "--------------------------------------------------------" << endl;
	cout << "Rotate 123456789 : " << rotate(123456789) << endl;
	int end_;
	cin >> end_;
	return 0;
}
int rotate(int x) {
	char str_x[100];
	itoa(x,str_x,10);
	char change;
	for (int i = 0; i < 100; i++) {
		if (str_x[i+1] != '\0') {
			change = str_x[i];
			str_x[i] = str_x[i+1];
			str_x[i + 1] =change;
		}
		else {
			break;
		}
	}
	x = atoi(str_x);
	return x;
}
long rotate(long x) {
	char str_x[100];
	ltoa(x, str_x, 10);
	char change;
	for (int i = 0; i < 100; i++) {
		if (str_x[i + 1] != '\0') {
			change = str_x[i];
			str_x[i] = str_x[i + 1];
			str_x[i + 1] = change;
		}
		else {
			break;
		}
	}
	x = atol(str_x);
	return x;
}