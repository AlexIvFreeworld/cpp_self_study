#include <iostream>
using namespace std;
int fill_arr(int **p_arr, int n, int m);
int show_arr(int **p_arr, int n, int m);
int main() {
	int n = 5, m = 5;
	int **p_arr = new int*[n];
	for (int i = 0; i < n; i++) {
		p_arr[i] = new int[m];
	}
	fill_arr(p_arr, n, m);
	cout << endl;
	show_arr(p_arr, n, m);
	int end_;
	cin >> end_;
	return (0);
}
int fill_arr (int **p_arr, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			p_arr[i][j] = (i + j) * 2;
		}
	}
	return (0);
}
int show_arr(int **p_arr, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << p_arr[i][j] << "\t";
		}
		cout << endl;
	}
	return (0);

}