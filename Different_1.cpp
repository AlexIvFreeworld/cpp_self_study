//Аргументы командной строки
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	cout << "There are " << argc << "arguments" << endl;
	for (int i = 0; i < argc; i++) {
		cout << i << " " << argv[i] << endl;
	}
	cin.get();
	return 0;
}