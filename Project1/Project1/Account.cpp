#include <iostream>
#include "Account.h"



void Account::withdraw(double amount) {
	std::cout << "Account withdraw amount: " << amount << std::endl;
}

void Account::deposit(double amount) {
	std::cout << "Account deposit amount: " << amount << std::endl;
}

Account::Account()
	: name{ "Ordinary account" }, balance{100.0} {

}

Account::~Account() {

}