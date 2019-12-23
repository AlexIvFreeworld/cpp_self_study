#include "Header.h"
int main() {
	myclass ob1, ob2;
	ob1.set_a(10);
	ob2.set_a(99);
	cout << ob1.get_a() << endl;
	cout << ob2.get_a() << endl;
	ob1.a = 56;
	ob2.a = 88;
	cout << ob1.get_a() << endl;
	cout << ob2.get_a() << endl;
	//-------------------------------------------
	stack s1, s2;
	int i;
	s1.init();
	s2.init();
	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');
	for (i = 0; i < 3; i++) cout << "symbol from s1 : " << s1.pop() << endl;
	for (i = 0; i < 3; i++) cout << "symbol from s2 : " << s2.pop() << endl;
	cout << s1.stck[0] << "\t" << s1.stck[1] << "\t" << s1.stck[2] << "\t" << endl;
	s1.push('q');
	s1.push('w');
	s1.push('e');
	s1.push('r');
	s1.push('t');
	s1.push('y');
	s1.push('u');
	s1.push('i');
	cout << s1.stck[0] << "\t" << s1.stck[1] << "\t" << s1.stck[2] << "\t" << endl;
	cout << s1.stck[3] << endl;
	cout << s1.stck[4] << "\t" << s1.stck[5] << "\t" << s1.stck[6] << "\t" << endl;
	cout << s1.stck[7] << "\t" << s1.stck[8] << "\t" << s1.stck[9] << "\t" << endl;
	//---------------------------------------------------------------------------
	card *p_arr_card = new card[10];
	char name[100], author[100];
	int num;
	char ch;
	for (int i = 0; i < 2; i++) {
		cout << "\nEnter the name : ";
		cin >> name;
		p_arr_card[i].in_name(name);
		cout << "\nEnter the Author : ";
		cin >> author;
		p_arr_card[i].in_author(author);
		cout << "\nEnter the amount book : ";
		cin >> num;
		p_arr_card[i].in_store(num);
	}
	p_arr_card[0].show();
	cout << endl;
	p_arr_card[1].show();
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << "\nDo you want to take book (g)" << endl;
		p_arr_card[0].show();
		cout << "\nor to return (r)?" << endl;
		cin >> ch;
		p_arr_card[0].store(ch);
		p_arr_card[0].show();
		cout << endl;
	}
	int end_;
	cin >> end_;
	return (0);
}