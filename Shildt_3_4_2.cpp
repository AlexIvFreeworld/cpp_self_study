//3.4. Дружественные функции: обзор
#include <iostream>
using namespace std;
class truck;
class car{
	int passengers;
	int speed;
	public:
	car(int a, int b){
		passengers = a;
		speed = b;
	}
	int camp(truck b);
};
class truck{
	int weight;
	int speed;
	public:
	truck(int a, int b){
		weight = a;
		speed = b;
	}
	friend int car::camp(truck b);
};
int car::camp(truck b) {
	return speed - b.speed;
}
int main()
{
	car oC(5,140);
	truck oT(10,180);
	int c = oC.camp(oT);
	if (c>0) cout << "car is faster" << endl;
	else if (c<0) cout << "truck faster" << endl;
	else if (c==0) cout << "car = truck" << endl;
	cin.get();
	return 0;
}