#include <iostream>

/*It is shown  a way that to invoke both base class constructor and 
Derived class constructor with parameter
*/

using namespace std;

class Base {

private:
	int value;
public:

	Base() : value{0} {cout << "Base no args conts\n"; }
	Base(int x) : value{ x } { cout<<"Base overloded const\n"; }
};


class Derived : public Base {

	int double_value;
public:
	Derived() :Base(), double_value{ 0 } { cout<<"Derived no args const\n"; }
	Derived(int x) : Base(x), double_value{ x * 2 } { cout << "Derived overloaded const\n"; }
};


void main() {

	Derived a{1000};

}