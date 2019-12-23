#include <windows.h>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
	char Answer;
	const int MessageCount = 8;
	int i, j;
	enum {CHOICE = 3, INPUT_FILENAME, INPUT_DIMENSIONS, INPUT_ELEMENTS, FILE_ERROR};
	char Msg[MessageCount][50] = { 
	"1. Вывести данные из текстового файла\n",
	"2. Записать данные в текстовый файл\n",
	"3. Выход из программы\n",
	"\nВаш выбор: ",
	"Введите имя обрабатываемого файла: ",
	"Введите размерности матрицы:\n",
	"Введите элементы матрицы:\n",
	"Невозможно открыть файл\n" 
	};
	for (i = 0; i < MessageCount; i++)
		CharToOem(Msg[i], Msg[i]);
	do {
		for (int i = 0; i < 4; i++)
			cout << Msg[i];
		cin >> Answer;
	} while (Answer < '1' || Answer > '3');
	if (Answer == '3')
		return 1;
	char FileName[80];
	int M, N;
	int num;
	cout << "\n" << Msg[INPUT_FILENAME];
	cin >> FileName;
	if (Answer == '1') {
		ifstream inF(FileName, ios::in | ios::_Nocreate);
		if (!inF) {
			cout << endl << Msg[FILE_ERROR];
			cin.get();
			return 1;
		}
		char s;
		cout << "\n";
		inF.seekg(15, ios::beg);
		for (int i = 1; i <= 42; i++) {
			inF.get(s);
			cout << s;
		}
		/*inF >> M;
		inF >> N;
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				inF >> num;
				cout << setw(6) << num;
			}
			cout << endl;
		}*/
		inF.close();
	}
	else {
		ofstream outF(FileName, ios::out);
		if (!outF) {
			cout << endl << Msg[FILE_ERROR];
			return 1;
		}
		cout << Msg[INPUT_DIMENSIONS];
		cout << "M: ";
		cin >> M;
		cout << "N: ";
		cin >> N;
		outF << M << " " << N << "\n";
		cout << Msg[INPUT_ELEMENTS];
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				cout << "A[" << i << "][" << j << "] = ";
				cin >> num;
				outF << num << " ";
			}
			outF << "\n";
		}
		outF.close();
	}
	cin.get();
	cin.get();
	return 0;
}