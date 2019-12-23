//3.4. Дружественные функции: обзор
#include <iostream>
#pragma warning(disable : 4996)
using namespace std;
class stack {
	char alf[10];
public:
	stack(char ch[]) {
		strcpy(alf, ch);
	}
	char *get_alf();
	int camp(char ch[]);
};
char *stack::get_alf() {
	return alf;
}
int stack::camp(char ch[]) {
	return strcmp(alf, ch);
}
int main()
{
	char ch[10] = { 'a','b','c','d','e','f' };
	char ch2[10] = { 'h','i','g','k','l','m' };
	stack A(ch);
	stack B = A;
	cout << ((A.camp(B.get_alf()) == 0) ? "Object A = B" : "A do not equal B")<< endl;
	stack C(ch2);
	cout << ((A.camp(C.get_alf()) == 0) ? "Object A = C" : "A do not equal C") << endl;
	cin.get();
	return 0;
}