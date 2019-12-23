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
	friend int camp(car a, truck b);
};
class truck{
	int weight;
	int speed;
	public:
	truck(int a, int b){
		weight = a;
		speed = b;
	}
	friend int camp(car a, truck b);
};
int camp(car a, truck b){
	return a.speed - b.speed;
}
int main()
{
	car oC(5,140);
	truck oT(10,180);
	int c = camp(oC, oT);
	if (c>0) cout << "car is faster" << endl;
	else if (c<0) cout << "truck faster" << endl;
	else if (c==0) cout << "car = truck" << endl;
	cin.get();
	return 0;
}