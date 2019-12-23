#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
void separate (string str) {
	string temp_1, temp_2;
	char oper;
	int count = 0;
	cout << str << endl;
	cout << str.length() << endl;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= '0' && str[i] <='9'){
			temp_1.push_back(str[i]);
		}
		else if (str[i] == '+' || str[i] == '-'){
			oper = str[i];
			cout << str[i] << endl;
			count = i + 1;
			break;
		}
	}
	for (int i = count; i < str.length(); i++){
			if (str[i] >= '0' && str[i] <='9'){
		temp_2.push_back(str[i]);
			}
	}
	cout << temp_1 << endl;
	cout << temp_2 << endl;
	int num_1 = stoi(temp_1);
	int num_2 = stoi(temp_2);
	
	//char arr_temp[temp.length()+1];
	//strcpy(arr_temp, temp);
	cout << num_1 << "  "<< num_2 << endl;
	cout << "Result :";
	switch (oper){
		case ('+'): 
		cout << num_1 + num_2 << endl;
		break;
		case ('-'): 
		cout << num_1 - num_2 << endl;
		break;
		default:
		cout << "Enter Error" << endl;
	}
	
}
int main()
{
	string sourse = "abcdifg1234+456";
	cout << "Enter number operator"
	         << " namber" << endl;
	       getline(cin, sourse);
	separate (sourse);
}
