#pragma once
#include "Account.h"


class Checking_account : public Account {



private:
	static constexpr const char* def_name = "Unnamed Checking Account";
	static constexpr const double def_balance = 0.0;

public:
	bool withdraw(double amount);
	Checking_account(std::string n = def_name, double b = def_balance);
};