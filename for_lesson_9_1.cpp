#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <windows.h>
#include <iostream>
#include <string>
using namespace std;
#pragma warning(disable : 4996)
void RussianMessage(const char *str) {
	char message[100];
	CharToOem(str, message);
	cout << message;
}
bool CopyFile(char *sourse, char *destination) {
	const int size = 65536;
	FILE *src, *dest;
	if (!(src = fopen(sourse, "rb"))) {
		return false;
	}
	int handle = fileno(src);
	char *data = new char[size];
	if (!data) {
		return false;
	}
	if (!(dest = fopen(destination, "wb"))) {
		delete[] data;
		return false;
	}
	int realsize;
	while (!feof(src)) {
		realsize = fread(data, sizeof(char), size, src);
		fwrite(data, sizeof(char), realsize, dest);
	}
	fclose(src);
	fclose(dest);
	return true;
}
int main(){
	char source [_MAX_PATH];
	char destination[_MAX_PATH];
	char answer[20];
	//RussianMessage("file_1.txt");
	//cin.getline(source, _MAX_PATH);
	cout << "Enter name end way for source file (for example name1.txt)" << endl;
	gets_s(source);
	cout << source << endl;
	cin.get();
	if (_access(source, 00) == -1) {
		//RussianMessage("\nУказан неверный путь или название файла\n");
		cout << "This name or way is wrong" << endl;
		cin.get();
		return 0;
	}
	//RussianMessage("file_3.txt");
	//cin.getline(destination, _MAX_PATH);
	cout << "Enter name end way for destination file (for example name2.txt)" << endl;
	gets_s(destination);
	cout << destination << endl;
	cin.get();
	if (_access(destination, 00) == 0) {
		//RussianMessage("\nТакой файл уже существует, перезаписать его?(1- да, 2- нет\n");
		cout << "This file already exist, rewrite it? (1- yes, 2 - no)" << endl;
			cin.getline(answer, 20);
		if (!strcmp(answer, "2")) {
			//RussianMessage("\nОперация отменена\n");
			cout << "The operation is aborted" << endl;
			cin.get();
			return 0;
		}
		else if (strcmp(answer, "1")) {
			//RussianMessage("\nНеправильный ввод\n");
			cout << "The wrong enter" << endl;
			cin.get();
			return 0;
		}
		if (_access(destination, 02) == -1) {
			//RussianMessage("\nНет доступа к записи\n");
			cout << "Do not have access to the record" << endl;
			cin.get();
			return 0;
		}
	}
	if (!CopyFile(source, destination)) {
		//RussianMessage("\nОшибка при работе с файлом\n");
		cout << "Error when working with file " << endl;
		cin.get();
	}
	cout << "file copied successfully " << endl;
	cin.get();
	return 1;
}
