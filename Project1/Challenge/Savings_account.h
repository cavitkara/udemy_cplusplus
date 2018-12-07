#pragma once
#include"Account.h"
#include <string>

class Savings_account : public Account {

protected:
	//std::string name;
	double int_rate;
private:
	static constexpr const char* def_name = "Unnamed Savings Account";
	static constexpr const double def_balance = 0.0;
	static constexpr const double def_int_rate = 0.0;
public:
	Savings_account(std::string n=def_name, double b=def_balance, double ir=def_int_rate);
	bool deposit(double a);

	friend std::ostream &operator<<(std::ostream &, Savings_account&);
};
