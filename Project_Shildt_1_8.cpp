#include <iostream>
using namespace std;
#pragma warning(disable : 4996)
void rev_str(char a1[], char a2[]);
void rev_str(char a1[]);
int main() {
	//int n, m,c = 1;
	//cout << "Enter n : ";
	//cin >> n;
	//cout << "Enter m : ";
	//cin >> m;
	//for (int i = 1; i <= m; i++) {
	//	c = c * n;
	//}
	//cout << "\n\n" << c << endl;
	cout << "---------------------------------------------------------------------" << endl;
	char s1[80], s2[80];
	strcpy(s1, "Hello");
	rev_str(s1, s2);
	int i = 0;
	while (s1[i] != '\0') {
		cout << s1[i];
		i++;
	}
	cout << endl;
	int j = 0;
	while (s2[j] != '\0') {
		cout << s2[j];
		j++;
	}
	rev_str(s1);
	cout << endl;
	int i_1 = 0;
	while (s1[i_1] != '\0') {
		cout << s1[i_1];
		i_1++;
	}

	int end_;
	cin >> end_;
	return (0);
}
void rev_str(char a1[], char a2[]) {
	int size = strlen(a1);
	cout << size << endl;
	char change;
	strcpy(a2, a1);
	for (int i = 0; i < size; i++,size--) {
			change = a2[i];
			a2[i] = a2[size-1];
			a2[size-1] = change;
		}
}
void rev_str(char a1[]) {
	int size = strlen(a1);
	char change;
	for (int i = 0; i < size; i++, size--) {
		change = a1[i];
		a1[i] = a1[size - 1];
		a1[size - 1] = change;
	}
}