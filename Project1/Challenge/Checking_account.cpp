#include <iostream>
#include"Checking_account.h"

using namespace std;

bool Checking_account::withdraw(double amount) {

	if (amount > 0)
		amount += 1.50;
	else {
		cout << "Invalid amount money!\n";
		return false;
	}
	return Account::withdraw(amount);
}

Checking_account::Checking_account(std::string def_name, double def_balance)
	: Account( def_name, def_balance ) {};