#include <iostream>
#include "Savings_account.h"



void Savings_account::deposit(double amount) {

	amount = amount + amount*int_rate / 100;
	Account::deposit(amount);
}

Savings_account::Savings_account(double bal, double int_rate)  //Overloaded Constructor
	: Account(bal), int_rate(int_rate) {
	std::cout << "Savings_account Constructor\n";
}

Savings_account::Savings_account()								//No args constructor
	: Account(0.0), int_rate(0) {
};

std::ostream &operator<<(std::ostream &os, const Savings_account &obj) {
	os << "Savings_account :" << obj.balance<< " interest rate: "<< obj.int_rate << std::endl;
	return os;
}