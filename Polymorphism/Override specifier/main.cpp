#include <iostream>
/*Example for the override specifier
If you miss sth about exact fuction parameters for overriding
The compiler automatically performs static binding.
And it is very difficult to debug. To handle this issue you soulh use override specifier to ensure the compiler that you want the compiler to bind as dynamically
*/


using namespace std;

class Base {

public:
	virtual void say_hello() const {

		cout << "Hello I am Base\n";
	}
};

class Derived :public Base {

public:
//	virtual void say_hello()  override { // Error because funct doesnt match exactly although I specified as override
	virtual void say_hello() const override {
		cout << "Hello I am Derived\n";
	}

};

void main() {

	Base *p1 = new Base();
	p1->say_hello();

	Derived *p2 = new Derived();
	p2->say_hello();

	Base *p3 = new Derived();
	p3->say_hello();

	while (1);

}