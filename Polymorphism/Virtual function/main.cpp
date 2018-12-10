#include <iostream>

using namespace std;

class Account {

public:
	virtual void withdraw() {
		cout << "Account : Withdraw\n";
	}
};

class Savings_account : public Account {
public:
	virtual void withdraw() {
		cout << "Savings_account: Withdraw\n";
	}
};

class Checking_account : public Account {
public:
	virtual void withdraw() {
		cout << "Check_account: Withdraw\n";
	}
};

class Trust_account : public Account {
public:
	virtual void withdraw() {
		cout << "Trust_account: Withdraw\n";
	}
};


	void main() {

		Account *p1 = new Account();
		Account *p2 = new Savings_account();
		Account *p3 = new Checking_account();
		Account *p4 = new Trust_account();

		p1->withdraw();
		p2->withdraw();
		p3->withdraw();
		p4->withdraw();


		delete p1;
		delete p2;
		delete p3;
		delete p4;

		while (1);
	}