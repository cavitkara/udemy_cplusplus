#include <iostream>

using namespace std;

class Base {

public:
	int a;

protected:
	int b;

private:
	int c;

};

class Derived : public Base {

	// a is public
	//b is protected
	//c is not accessible
};

int main() {

	Base base;

	base.a = 100; //OK because public already
//	base.b = 200; //Compiler error because cant access protected via an object
//	base.c = 300; //Compiler error becaouse its private


	Derived derived;

	derived.a = 100;  // OK
//	derived.b = 200;  //Error
//	derived.c = 300;  //Error


	return 0;
}