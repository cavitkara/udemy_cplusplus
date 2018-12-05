#include <iostream>
#include "Savings_account.h"



void Savings_account::deposit(double amount) {

	amount = amount + amount*int_rate / 100;
	Account::deposit(amount);
	balance += 1; //To test  whether I can  access balance value or not? --> Yes I can 
}

Savings_account::Savings_account(double bal, double int_rate)  //Overloaded Constructor
	: Account(bal), int_rate(int_rate) {
	std::cout << "Savings_account Constructor\n";
}

Savings_account::Savings_account()								//No args constructor
	: Account(0.0), int_rate(0) {
};


/*This function is overloaded in order to display int_rate attribute of Derived class
Otherwise if you call it without the following definition the other method in Account class will be called without int_rate.
And it will slice only base part of the derived class
*/
std::ostream &operator<<(std::ostream &os, const Savings_account &obj) {
	os << "Savings_account :" << obj.balance<< " interest rate: "<< obj.int_rate << std::endl;
	return os;
}