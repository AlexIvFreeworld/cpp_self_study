#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Items {
	double x;
	double y;
	int m;
public:
	Items() {};
	Items(double xx, double yy, int mm) {
		x = xx;
		y = yy;
		m = mm;
	}
	int Get_M() { return m; }
};
int main() {
	vector<int> V;
	V = { 1,2,3,4,5 };
	cout << "Size V = " << V.size() << endl;
	V.push_back(99);
	int arr[] = { 5,4,3,2,10 };
	for (unsigned int i = 0; i < V.size(); i++ ) cout <<V[i] << endl;
	vector<int> V2;
	V2 = { 20,30,40,50 };
	cout << "------------------------------------------" << endl;
	for (unsigned int i = 0; i < V2.size(); i++) cout << V2[i] << endl;
	swap(V[0], V2[0]);
	cout << "------------------------------------------" << endl;
	for (unsigned int i = 0; i < V2.size(); i++) cout << V2[i] << endl;
	cout << "------------------------------------------" << endl;
	cout << *V2.begin() << endl;
	cout << &V2.begin() << endl;
	cout << "------------------------------------------" << endl;
	cout << &V2.end() << endl;
	cout << *(V2.end()-1) << endl;
	cout << "------------------------------------------" << endl;
	vector<int> V3 = { 4,3,1,2,5,6 };
	for (unsigned int i = 0; i < V3.size(); i++) cout << V3[i] << " ";
	cout << endl;
	sort(V3.begin(), V3.end());
	for (unsigned int i = 0; i < V3.size(); i++) cout << V3[i] << " ";
	cout << endl;
	sort(V3.rbegin(), V3.rend());
	for (unsigned int i = 0; i < V3.size(); i++) cout << V3[i] << " ";
	cout << endl;
	cout << "------------------------------------------" << endl;
	vector<Items> VI;
	//VI.push_back(Items(2.0, 3.0, 4));//it doesn't work
	VI.emplace_back(2.0, 3.0, 4);
	cout << "VI[0].Get_M() = " << VI[0].Get_M() << endl;
	cout << "------------------------------------------" << endl;
	cin.get();
	return 1;
}