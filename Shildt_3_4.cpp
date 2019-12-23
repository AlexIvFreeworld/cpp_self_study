#include <iostream>
using namespace std;
class MC{
int a,b;
public:
MC(int a_, int b_){
	a = a_;
	b = b_;
}
friend int isfactor(MC ob);

};
int isfactor(MC ob){
	if(!(ob.a%ob.b)) return 1;
	else return 0;
}
int main()
{
	MC ob1(10,2), ob2(10,3);
	if (isfactor(ob2)) cout << "without rest" << endl;
	else cout << "with rest" << endl;
	cin.get();
	return 0;
}