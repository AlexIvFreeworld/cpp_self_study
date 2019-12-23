//3.4. Дружественные функции: обзор
#include <iostream>
using namespace std;
class planet {
	int moons;
	double dist_from_sun;
	double diameter;
	double mass;
public:
	planet(int mo, double dist, double diam, double ma) {
		moons = mo;
		dist_from_sun = dist;
		diameter = diam;
		mass = ma;
	}
	double get_miles() {
		return dist_from_sun;
	}
	friend int light(planet &A);
};
int light(planet &A) {
	return A.dist_from_sun / 186000;
}
int main()
{
	planet mars(2, 2000000.0, 500000.0, 600000.0);
	cout << "Time = " << light(mars) << " s" << endl;
	cin.get();
	return 0;
}