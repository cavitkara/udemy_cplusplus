#include <iostream>
/*****
Here it is shown that you can use reference for implementing dynamic binding
*****/
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

void do_withdraw(Account &obj) {
	obj.withdraw();
}


void main() {

	Account p;
	Account &ref1 = p;
	ref1.withdraw();

	Trust_account t;
	Account &ref2 = t;
	ref2.withdraw();

	Savings_account sv;
	do_withdraw(sv);


	while (1);
}