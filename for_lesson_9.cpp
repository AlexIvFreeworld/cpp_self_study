#include <stdio.h>
#include <io.h>
#include <iostream>
using namespace std;
#pragma warning(disable : 4996)
void f();
int main(){
	f();
	cin.get();
	return 0;
}
void f() {
	FILE *f1, *f2;
	f1 = fopen("file_1.txt", "r");
	f2 = fopen("file_2.txt", "r");
	cout << "f1 = fopen(\"file_1.txt\", \"r\") = " << f1 << endl;
	/*int close = fclose(f1);
	cout << "fclose(f1) = " << close << endl;
	cout << "f1 = fopen(\"file_1.txt\", \"r\") = " << f1 << endl;*/
	char str_1[200];
	char str_2[200] = "This is string creating with C++";
	fgets(str_1, 200, f1);
	cout << str_1 << endl;
	int close = fclose(f1);
	f1 = fopen("file_1.txt", "w");
	fputs(str_2, f1);
	close = fclose(f1);
	cout << "End fputs(str_2, f1)" << endl;
	char buffer[50];
	size_t size = 1;
	size_t count = 50;
	cout << "fread(buffer, size, count, f2) = " << fread(buffer, size, count, f2) << endl;
	cout << "buffer" << buffer << endl;
	//close = fclose(f2);
	f1 = fopen("file_1.txt", "w");
	cout << "fwrite(buffer, size, count, f1) = " << fwrite(buffer, size, count, f1) << endl;
	cout << "feof(f1) = " << feof(f1) << endl;
	cout << "_fileno(f1) = " << _fileno(f1) << endl;
	cout << "feof(f2) = " << feof(f2) << endl;
	cout << "_fileno(f2) = " << _fileno(f2) << endl;
	cout << "fseek(f1, 5, SEEK_SET) = " << fseek(f1, 5, SEEK_SET) << endl;
	//f1 = fopen("file_1.txt", "a");
	fputs(str_2, f1);
	cout << "fseek(f1, 10, SEEK_END) = " << fseek(f1, 10, SEEK_END) << endl;
	fputs(str_2, f1);
	char end_string[3] = "\n";
	fputs(end_string, f1);
	fputs(buffer, f1);
	fclose(f1);
	f1 = fopen("file_1.txt", "r");
	cout << "_access(\"file_1.txt\", 00) = " << _access("file_1.txt", 00) << endl;
	cout << "_access(\"file_1.txt\", 02) = " << _access("file_1.txt", 02) << endl;
	cout << "_access(\"file_1.txt\", 04) = " << _access("file_1.txt", 04) << endl;
	cout << "_access(\"file_1.txt\", 06) = " << _access("file_1.txt", 06) << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "_access(\"file_2.txt\", 00) = " << _access("file_2.txt", 00) << endl;
	cout << "_access(\"file_2.txt\", 02) = " << _access("file_2.txt", 02) << endl;
	cout << "_access(\"file_2.txt\", 04) = " << _access("file_2.txt", 04) << endl;
	cout << "_access(\"file_2.txt\", 06) = " << _access("file_2.txt", 06) << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "_filelength(_fileno(f1)) = " << _filelength(_fileno(f1)) << endl;
	cout << "_filelength(_fileno(f2)) = " << _filelength(_fileno(f2)) << endl;
}