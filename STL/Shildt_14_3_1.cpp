#include <iostream>
#include <vector>
using namespace std;
class Demo {
	double d;
public:
	Demo() {
		d = 0.0;
	}
	Demo(double x) {
		d = x;
	}
	//Demo& operator= (double x) {
	//d = x;
	//cout << "It is Demo& operator= (double x)" << endl;
	//return *this;
	//}
	double GetD() {
		return d;
	}
};
bool operator<(Demo a, Demo b) {
	return a.GetD() < b.GetD();
}
bool operator==(Demo a, Demo b) {
	return a.GetD() == b.GetD();
}
int main() {
	vector<Demo> v;
	int i;
	for (i = 0; i < 10; i++) {
		v.push_back(Demo(i / 3.0));
	}
	for (Demo D : v) {
		cout << D.GetD() << " ";
	}
	cout << endl;
	for (i = 0; i < v.size(); i++) {
		v[i] = v[i].GetD() * 2.1; // похоже встроенный оператор = используется
	}
	for (Demo D : v) {
		cout << D.GetD() << " ";
	}
	cout << endl;
	cin.get();
	return 0;
}