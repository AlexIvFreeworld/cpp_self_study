#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#pragma warning(disable : 4996)
void RussianMessage(const char *message) {
	char rmessage[256];
	CharToOem(message, rmessage);
	cout << rmessage;
}
int RussianMenu() {
	RussianMessage("\nВведите 1 для добавления новой структуры в файл\n");
	RussianMessage("\nВведите 2 для показа всех структур из файла\n");
	RussianMessage("\nВведите 3 для выхода\n");
	int choice;
	cin >> choice;
	return choice;
}
class Man {
	int age;
	char *name;
	char *surname;
public:
	Man(char *n, char *s, int a);
	Man();
	~Man();
	void put();
	void show();
	void SaveToFile();
	static void ShowFromFile();
};
Man::Man() {
	age = 0;
	name = 0;
	surname = 0;
}
Man::Man(char *n, char *s, int a) {
	age = a;
	name = new char[strlen(n) + 1];
	if (!name) {
		RussianMessage("\nОшибка при выделении памяти\n");
		exit(1);
	}
	strcpy(name, n);
	surname = new char[strlen(s) + 1];
	if (!surname) {
		RussianMessage("\nОшибка при выделении памяти\n");
		exit(1);
	}
	strcpy(surname, s);
}
Man::~Man() {
	delete[]name;
	delete[]surname;
}
void Man::put() {
	char temp[1024];
	RussianMessage("\nВведите имя: \n");
	cin >> temp;
	if (name)
		delete[]name;
	name = new char[strlen(temp) + 1];
	if (!name) {
		RussianMessage("\nОшибка при выделении памяти\n");
		exit(1);
	}
	strcpy(name, temp);
	RussianMessage("\nВведите фамилию: \n");
	cin >> temp;
	if (surname)
		delete[]surname;
	surname = new char[strlen(temp) + 1];
	if (!surname) {
		RussianMessage("\nОшибка при выделении памяти\n");
		exit(1);
	}
	strcpy(surname, temp);
	RussianMessage("\nВведите возраст: \n");
	cin >> age;
}
void Man::show() {
	RussianMessage("\nИмя: \n");
	cout << name;
	RussianMessage("\nФамилия: \n");
	cout << surname;
	RussianMessage("\nВозраст: \n");
	cout << age << "\n";
}
void Man::SaveToFile() {
	int size;
	fstream f("men.txt", ios::out | ios::binary | ios::app);
	if (!f) {
		RussianMessage("\nФайл не открылся для записи \n");
		exit(1);
	}
	f.write((char*)&age, sizeof(age));
	size = strlen(name);
	f.write((char*)&size, sizeof(int));
	f.write((char*)name, size * sizeof(char));
	size = strlen(surname);
	f.write((char*)&size, sizeof(int));
	f.write((char*)surname, size * sizeof(char));
	f.close();
}
void Man::ShowFromFile() {
	fstream f("men.txt", ios::in | ios::binary);
	if (!f) {
		RussianMessage("\nФайл не открылся для чтения \n");
		cin.get();
		exit(1);
	}
	char *n, *s;
	int a;
	int temp;
	while (f.read((char*)&a, sizeof(int))) {
		RussianMessage("\nИмя: \n");
		f.read((char*)&temp, sizeof(int));
		n = new char[temp + 1];
		if (!n) {
			RussianMessage("\nОшибка при выделении памяти\n");
			cin.get();
			exit(1);
		}
		f.read((char*)n, temp * sizeof(char));
		n[temp] = '\0';
		cout << n;
		RussianMessage("\nФамилия: \n");
		f.read((char*)&temp, sizeof(int));
		s = new char[temp + 1];
		if (!s) {
			RussianMessage("\nОшибка при выделении памяти\n");
			cin.get();
			exit(1);
		}
		f.read((char*)s, temp * sizeof(char));
		s[temp] = '\0';
		cout << s;
		RussianMessage("\nВозраст: \n");
		cout << a << "\n";
		delete[]n;
		delete[]s;
	}
	cin.get();

}
int main() {
	Man *a;
	do {
		switch (RussianMenu()) {
		case 1:
			a = new Man;
			a->put();
			a->SaveToFile();
			delete a;
			break;
		case 2:
			Man::ShowFromFile();
			break;
		case 3:
			RussianMessage("\nДо свидания \n");
			return 0;
		default:
			RussianMessage("\nНеправильный ввод \n");
		}
	} while (1);
	cin.get();
	cin.get();
	return 0;
}