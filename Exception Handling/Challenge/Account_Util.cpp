#include "Account_Util.h"
#include<iostream>

using namespace std;

void display( std::vector<Account*> &accounts)
{
	cout << "\n===Accounts========================\n";
	for ( auto i : accounts)
		cout<< *i << endl;
}

void deposit(std::vector<Account*>& accounts, double amount)
{
	cout << "\n=====Depositing the accounts=========\n";
	for (auto i : accounts) {
		if (i->deposit(amount)) {
			cout << "Deposited amount :" << amount << "to " << *i << endl;
		}
		else
			cout << "Failed deposit of " << amount << "to " << *i << endl;
	}
}

void withdraw(std::vector<Account*> &accounts, double amount)
{
	cout << "\n====Withdrawing the accounts=============\n";
	for ( auto i:accounts) {
		if (i->withdraw(amount))
			cout << "Withdrew amount :" << amount << " from " << *i << endl;
		else
			cout << "Failed withdraw of " << amount << " from" << *i << endl;
	}
}
