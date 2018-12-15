/*****

Here in this code sinpped it's shown that
how we cant provide dynamic binding and create waster of repetation 
unless we use an interface class at the top of the other classes


Note: This code is an example to demonstrate what is bad coding practice!
*/

#include <iostream>

using namespace std;

class Account {

	friend ostream &operator<<(ostream &os, const Account & obj);

public:
	virtual void withdraw() {
		cout << "In Account withdraw\n";
	}
	virtual ~Account() {};

};

ostream &operator<<(ostream &os, const Account &obj) {
	cout << "Account : display\n";
	return os;
}


class Savings : public Account {

	friend ostream &operator<<(ostream &os, const Savings &obj);

public:
	virtual void withdraw() override {
		cout << "In Savings withdraw\n";
	}
	virtual ~Savings() {};

};

ostream &operator<<(ostream &os, const Savings &obj) {
	cout << "Savings : display\n";
	return os;
}


class Trust : public Account {

	friend ostream &operator<<(ostream &os, const Trust &obj);

public:
	virtual void withdraw() override {
		cout << "In Trust withraw\n";
	}
	virtual ~Trust() {};
};

ostream &operator<<(ostream &os, const Trust &obj) {
	cout << "Trust : display\n";
	return os;
}


void main() {

	Account *p1 = new Account();
	Account *p2 = new Savings();
	Account *p3 = new Trust();

	p1->withdraw();
	p2->withdraw();

	cout << *p1;
	cout << *p2;

	while (1);
}