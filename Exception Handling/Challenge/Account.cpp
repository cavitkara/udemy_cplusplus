#include<iostream>
#include"Account.h"
#include"IllegalBalanceException.h"
#include"InsufficentFundException.h"

using namespace std;

Account::Account(std::string name, double balance)
	: name{name}, balance(balance) {
	if (balance < 0.0)
		throw IllegalBalanceException();
	//this->balance = 10;
};

 void Account::print(std::ostream &os)  {
	 os << "Account : "<<this->name<<" : "<< this->balance<<endl;
}

bool Account::deposit(double amount) {
	if (amount <= 0)
		return false;
	balance += amount;
	return true;
}

bool Account::withdraw(double amount) {
	if ((balance - amount) < 0) {
		throw InsufficentFundException();
		return false;
	}
	balance -= amount;
	return true;
}
double Account::get_balance() const
{
	return this->balance;
}
