/*****

Here in this code sinpped it's shown that
How useful of using Interface class on the top of the other classes in order to inherit and
provide dynamic binding
*/

#include <iostream>

using namespace std;


class I_Printable {

	friend ostream &operator<<(ostream &os, I_Printable &obj);

public: 
	virtual void print(ostream &os) = 0;
};


class Account: public I_Printable {

	
public:
	virtual void withdraw() {
		cout << "In Account withdraw\n";
	}

	virtual void print(ostream &os) override {
		os << " Account : Display\n";
	}

	virtual ~Account() {};

};



class Savings : public Account {

public:

	virtual void print(ostream &os) override {
		os << " Savings : Display\n";
	}

	virtual void withdraw() override {
		cout << "In Savings withdraw\n";
	}
	virtual ~Savings() {};

};



class Trust : public Account {


public:

	virtual void print(ostream &os) override {
		os << " Trust : Display\n";
	}

	virtual void withdraw() override {
		cout << "In Trust withraw\n";
	}
	virtual ~Trust() {};
};


ostream &operator<<(ostream &os, I_Printable &obj) {
	obj.print(os);
	return os;
}

class Dog : public I_Printable {

public:
	virtual void print(ostream &os) override {
		os << "Hav hav";
	}
};

void printable( I_Printable &obj) {
	cout << obj<<endl;
}

void main() {

	Account *p1 = new Account();
	Account *p2 = new Savings();
	Account *p3 = new Trust();

	//p1->withdraw();
	//p2->withdraw();

	cout << *p1;
	cout << *p2;

	Dog dog;
	printable(dog);
	cout << dog;

	while (1);
}