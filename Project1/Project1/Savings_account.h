#pragma once
#include "Account.h"



class Savings_account :  public Account {

public:

	double int_rate;
	void withdraw(double);
	void deposit(double);

	Savings_account();
	~Savings_account();




};
