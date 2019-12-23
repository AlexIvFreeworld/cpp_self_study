#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;
enum yn {no, yes};
enum color {red, yellow, green, orange};
void out(enum yn x);
//char *c[] = { "red", "yellow", "green", "orange" };
//char red [10] = "red";
//char yellow[10] = "yellow";
//char green[10] = "green";
//char orange[10] = "orange";
char c[4][10] = { "red", "yellow", "green", "orange" };
class fruit {
public:
	enum yn annual;
	enum yn perennial;
	enum yn tree;
	enum yn tropical;
	enum color clr;
	char name[40];
};
class Apple : public fruit {
	enum yn cooking;
	enum yn crunchy;
	enum yn eating;
public:
	void seta(const char n[], enum color c, enum yn ck, enum yn crchy,
		enum yn e);
	void show();
};
class Orange : public fruit {
	enum yn juice;
	enum yn sour;
	enum yn eating;
public:
	void seto(const char n[], enum color c, enum yn j, enum yn sr, enum yn e);
	void show();

};
void Apple::seta(const char n[], enum color c, enum yn ck, enum yn crchy,
	enum yn e) {
	strcpy(name, n);
	annual = no;
	perennial = yes;
	tree = yes;
	tropical = no;
	clr = c;
	cooking = ck;
	crunchy = crchy;
	eating = e;
}
void Orange::seto(const char n[], enum color c, enum yn j, enum yn sr,
	enum yn e) {
	strcpy(name, n);
	annual = no;
	perennial = yes;
	tree = yes;
	tropical = yes;
	clr = c;
	juice = j;
	sour = sr;
	eating = e;
}
void Apple::show()
{
	cout << name << " яблоко — это: " << "\n";
	cout << "Однолетнее растение: "; out(annual);
	cout << "Многолетнее растение: "; out(perennial);
	cout << "Дерево: "; out(tree);
	cout << "Тропическое: "; out(tropical);
	cout << "Цвет: " << c[clr] << "\n";
	cout << "Легко приготавливается: "; out(cooking);
	cout << "Хрустит на зубах: "; out(crunchy);
	cout << "Съедобное: "; out(eating);
	cout << "\n";
}
void Orange::show()
{
cout << name << " апельсин — это: " << "\n";
cout << "Однолетнее растение: "; out(annual);
cout << "Многолетнее растение: "; out(perennial);
cout << "Дерево: "; out(tree);
cout << "Тропическое: "; out(tropical);
cout << "Цвет: " << c[clr] << "\n";
cout << "Годится для приготовления сока: "; out(juice);
cout << "Кислый: "; out(sour);
cout << "Съедобный: "; out(eating);
cout << "\n";
}
void out(enum yn x)
{
	if (x == no) cout << "нет" << endl;
	else cout << "да" << endl;
}
int main() {
	setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
	Apple a1, a2;
	Orange o1, o2;
	a1.seta("Красная прелесть", red, no, yes, yes);
	a2.seta("Джонатан", red, yes, no, yes);
	o1.seto ("Пyn", orange, no, no, yes);
	o2.seto ("Валенсия", orange, yes, yes, no);
	a1.show();
	a2.show();
	o1.show();
	o2.show();
	cin.get();
	return 0;
}
