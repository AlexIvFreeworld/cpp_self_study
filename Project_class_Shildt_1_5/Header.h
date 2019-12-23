#pragma once
#pragma warning(disable : 4996)
#include <iostream>
using namespace std;
#define SIZE 10
class myclass {
public:
	int a;
public:
	void set_a(int num);
	int get_a();
};
void myclass::set_a(int num) {
	a = num;
}
int myclass::get_a() {
	return a;
}
//-------------------------------------------------------------
class stack {
public:
	char stck[SIZE];
	int tos;
public:
	void init();
	void push(char ch);
	char pop();
};
void stack::init() {
	tos = 0;
}
void stack::push(char ch) {
	if (tos == SIZE) {
		cout << "Stack is full";
		return;
	}
	stck[tos] = ch;
	tos++;
}
char stack::pop() {
	if (tos == 0) {
		cout << "Stack is empty";
		return 0;
	}
	tos--;
	return stck[tos];
}
//-------------------------------------------------------------------------------
class card {
	char name[100];
	char author[100];
	int num;
public:
	void in_name(char ch[]);
	void in_author(char ch[]);
	void in_store(int a);
	int store(char ch);
	void show();
};
void card::in_name(char ch[]) {
	strcpy(name, ch);
		}
void card::in_author(char ch[]) {
	strcpy(author, ch);
}
void card::in_store(int a) {
	num = a;
}
int card::store(char ch) {
	if (ch == 'g' && num == 0) {
		cout << "Do not have the book" << endl;
		return 0;
	}
	else if (ch == 'g') {
	num--;
	}
	else if (ch == 'r') {
	num++;
	}
	return num;
}
void card::show() {
	cout << "Name the book : " << name << endl;
	cout << "Author the book : " << author << endl;
	cout << "The rest the book : " << num << endl;
}