#include<iostream>

//Below is a classical example for Static binding
//Here you can see that the compiler only knows type of the pointer therefore Base::say_hello always invoked

using namespace std;

class Base {


public:
	void say_hello() {
		cout << "Hello I am Base class\n";
	}
};


class Derived : public Base {

public:
	void say_hello() {
		cout << "Hello I am Derived class\n";
	}
};

void greetings(Base &obj) {
	obj.say_hello();
}


void main() {

	Base a;
	a.say_hello();

	Derived b;
	b.say_hello();


	Base *p1 = new Derived();
	p1->say_hello();


	greetings(a);
	greetings(b);

	while (1);

}