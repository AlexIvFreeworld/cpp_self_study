#include <iostream>
#include <string>
using namespace std;
int main() {
	string arr_way;// ������ ��� ������ ����
	int stat_h = 0;//��������� ��������� ������ ��� ������� ����
	int sum_h = 0;// ������� �����
	int size = 0; //������ ������ 
	cout << "Enter U (if move up), D (if move down) or N (if don't move) " << endl;
	getline(cin,arr_way);
	while (arr_way[size] != '\0') {
		size++;
	}
	for(int i = 0; i < size; i++) {
		if (arr_way[i] == 'U') {
			stat_h++;
		}
		else if (arr_way[i] == 'D') {
			stat_h--;
		}
		else;
		if (arr_way[i] == 'U' && stat_h == 0) {
			sum_h++;
		}
		else;
	}
	cout << "Amount lowlands : " << sum_h << endl;
	int end_;
	cin >> end_;
	return 0;
}