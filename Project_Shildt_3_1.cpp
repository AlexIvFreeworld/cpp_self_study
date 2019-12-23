#include <iostream>
using namespace std;
class planet {
	int moons;
	double dist_from_sun;
	double diameter;
	double mass;
public:
	planet() { moons = 11234; }
	int get_moons();
	~planet() {}
};
class Mars : public planet {
public:
	void show();
};
int planet::get_moons() {
	return moons;
}
void Mars::show() {
	cout << get_moons() << endl;
}
class sample {
	int a;
	char c;
public :
	sample(int x, char ch) {
		a = x;
		c = ch;
	}
	void show();
};
void sample::show() {
	cout << "a = " << a << " c = " << c << endl;
}
int main() {
	Mars M;
	cout << M.get_moons() << endl;
	M.show();
	sample S(100, 'X');
	S.show();
	cin.get();
	return 0;
}