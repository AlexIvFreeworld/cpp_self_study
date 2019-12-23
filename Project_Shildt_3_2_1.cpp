#include <iostream>
using namespace std;
class samp{
	int i;
public:
	samp(int i_);
	samp(samp &obj) {
	cout << "This is COPYconstructor " << this << endl;
	}
	void set_i(int i_);
	int get_i();
	~samp() {
		cout << "This is DESTRUCTOR " << this << endl;
	}
};
samp::samp(int i_) {
	i = i_;
	cout << "This is constructor " << this << endl;
}
void samp::set_i(int i_) {
	i = i_;
}
int samp::get_i() {
	return i;
}
void sqrt_it(samp o) {//Передача объекта по значению, создается локальная копия, изменения не затрагивают оригинал
	cout << "start sqrt_it " << endl;
	o.set_i(o.get_i()*o.get_i());
	o.set_i(230);
	cout << "For copy of an object i = " << o.get_i() << endl;
}
void sqrt_it(samp *o) {//Передача адреса, измения происходят с оригиналом
	cout << "start sqrt_it " << endl;
	o->set_i(o->get_i()*o->get_i());
	cout << "For copy of an object i = " << o->get_i() << endl;
}
void func();
int main (){
	func();
	cin.get();
	return 0;
}
void func() {
	samp A(10);
	sqrt_it(A);
	sqrt_it(&A);
	cout << A.get_i() << endl;
	cout << A.get_i() << endl;
}