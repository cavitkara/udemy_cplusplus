#include "Savings_account.h"

Savings_account::Savings_account(std::string n, double b, double ir)
	:Account(n, b), int_rate(ir)
{
}

bool Savings_account::deposit( double amount) {
	amount = amount + amount * int_rate / 100;
	return Account::deposit(amount);
}

void Savings_account::print(std::ostream &os) {
	os << "Savings : "<<this->balance<<std::endl;
}

bool Savings_account::withdraw(double amount) {
	return Account::withdraw(amount);
}


