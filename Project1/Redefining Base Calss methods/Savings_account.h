#pragma once
#include "Account.h"


class Savings_account : public Account {

	friend std::ostream &operator<<(std::ostream &os, const Savings_account &obj);

public:
	//no need withdraw
	void deposit(double);


	Savings_account();
	Savings_account(double, double);

protected:
	double int_rate;

};
