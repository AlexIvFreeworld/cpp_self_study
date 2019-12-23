#include <iostream>
#include <list>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;
class Project {
public:
	char Name[40];
	int days_to_complection;
	Project() {
		strcpy(Name, " ");
		days_to_complection = 0;
	}
	Project(const char *n, int d) {
		strcpy(Name, n);
		days_to_complection = d;
	}
	void Add_days(int i) {
		days_to_complection += i;
	}
	void Sub_days(int i) {
		days_to_complection -= i;
	}
	bool Complected() {
		return !days_to_complection;
	}
	void Report() {
		cout << Name << ": ";
		cout << days_to_complection;
		cout << " days_to_complection" << endl;
	}
};
bool operator<(const Project& a, const Project& b) {
	return a.days_to_complection < b.days_to_complection;
}
bool operator>(const Project& a, const Project& b) {
	return a.days_to_complection > b.days_to_complection;
}
bool operator==(const Project& a, const Project& b) {
	return a.days_to_complection == b.days_to_complection;
}
bool operator!=(const Project& a, const Project& b) {
	return a.days_to_complection != b.days_to_complection;
}
int main() {
	list<Project> Pro;
	Pro.push_back(Project("Develop compilartor", 35));
	Pro.push_back(Project("Develop spreadsheet", 190));
	Pro.push_back(Project("Develop STL", 1000));
	list<Project>::iterator p = Pro.begin();
	while (p != Pro.end()) {
		p->Report();
		p++;
	}
	p = Pro.begin();
	p->Add_days(10);
	do {
		p->Sub_days(5);
		p->Report();
	} while (!p->Complected());
	cout << "------------------------------------------" << endl;
	for (Project P : Pro) {
		P.Report();
	}
	list<Project> Pro_2;
	Pro_2.push_back(Project("Develop DataBase", 780));
	Pro_2.push_back(Project("Develop Standart Letter", 50));
	Pro_2.push_back(Project("Develop COM", 300));
	cout << "------------------------------------------" << endl;
	for (Project P : Pro_2) {
		P.Report();
	}
	Pro_2.sort();
	cout << "-------------------List Pro_2 after sorting-----------------------" << endl;
	for (Project P : Pro_2) {
		P.Report();
	}
	Pro.merge(Pro_2);// сливает только отсортированные списки
	cout << "-------------------List Pro_2 after merging Pro with Pro_2-----------------------" << endl;
	for (Project P : Pro) {
		P.Report();
	}
	cin.get();
	return 0;
}