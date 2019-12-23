#include <iostream>
using namespace std;
int main() {
	char arr_way[100];// массив для записи пути
	int stat_h = 0;//начальное положение высоты над уровнем моря
	int sum_h = 0;// счетчик низин
	cout << "Enter U (if move up), D (if move down) or N (if don't move) " << endl;
	cin >> arr_way;
	int i = 0;
	while (arr_way[i] != '\0') {
		if (arr_way[i] == 'U') {
			stat_h++;
		}
		else if (arr_way[i] == 'D'){
			stat_h--;
		}
		else;
		if (arr_way[i] == 'U' && stat_h == 0) {
			sum_h++;
		}
		else;
		i++;
	}
	cout << "Amount lowlands : " << sum_h << endl;
	int end_;
	cin >> end_;
	return 0;
}