#include<iostream>
#include"Account.h"

using namespace std;

Account::Account(std::string name, double balance)
	: name{name}, balance(balance) {
	//this->balance = 10;
};

bool Account::deposit(double amount) {
	if (amount <= 0)
		return false;
	balance += amount;
	return true;
}

bool Account::withdraw(double amount) {
	if ((balance - amount) < 0) {
		cout << "Not enough funds !\n";
		return false;
	}
	balance -= amount;
	return true;
}
double Account::get_balance() const
{
	return this->balance;
}

std::ostream &operator<<(std::ostream &os, Account &obj) {
	os << "[ Account : " << obj.name << ": " << obj.balance << " ]\n";

	return os;
}