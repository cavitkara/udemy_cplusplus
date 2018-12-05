#include "Savings_account.h"

Savings_account::Savings_account(std::string n, double b, double ir)
	:Account(n, b), int_rate(ir)
{
}

bool Savings_account::deposit( double amount) {
	amount = amount + amount * int_rate / 100;
	return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, Savings_account &obj) {
	os << "[ Savings_account: " << obj.name << " : " << obj.balance << " , " << obj.int_rate << "% ]\n";
	return os;
}