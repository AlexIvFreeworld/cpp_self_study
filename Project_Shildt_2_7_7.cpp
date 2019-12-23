#include <iostream>
#include <ctime>
using namespace std;
class fut_to_inch {
	double fut;
	double inch;
public:
	fut_to_inch(double fut_) {
		fut = fut_;
		inch = fut_ / 12;
	}
	void show_inch() {
		cout << "in the " << fut << " fut " << " is " << inch << " inch" << endl;
	}
};
class dice {
	int num;
public:
	dice() {
		num = 0;
	}
	int roll() {
		return  num = rand() % 6 + 1;
	}
};
int main() {
	srand(time(NULL));
	fut_to_inch ob(24);
	ob.show_inch();

	cin.get();
	return 0;
}
