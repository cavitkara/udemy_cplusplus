#include "Account_Util.h"
#include<iostream>



using namespace std;

void display( std::vector<Account>& accounts)
{
	cout << "\n===Accounts========================\n";
	for ( auto &i : accounts)
		cout<< i << endl;
}

void deposit(std::vector<Account>& accounts, double amount)
{
	cout << "\n=====Depositing the accounts=========\n";
	for (auto &i : accounts) {
		if (i.deposit(amount)) {
			cout << "Deposited amount :" << amount << "to " << i << endl;
		}
		else
			cout << "Failed deposit of " << amount << "to " << i << endl;
	}
}

void withdraw(std::vector<Account> &accounts, double amount)
{
	cout << "\n====Withdrawing the accounts=============\n";
	for ( auto &i:accounts) {
		if (i.withdraw(amount))
			cout << "Withdrew amount :" << amount << " from " << i << endl;
		else
			cout << "Failed withdraw of " << amount << " from" << i << endl;
	}


}

//Savings_account

void display(std::vector<Savings_account> &accounts)
{
	cout << "\n===Savings Accounts========================\n";
	for (auto &i:accounts)
		cout << i << endl;
}

void deposit(std::vector<Savings_account> &accounts, double amount)
{
	cout << "\n=====Depositing the Savings accounts=========\n";
	for (auto &i:accounts) {
		if (i.deposit(amount)) {
			cout << "Deposited amount :" << amount << " to " << i << endl;
		}
		else
			cout << "Failed deposit of " << amount << " to " << i << endl;
	}
}

void withdraw(std::vector<Savings_account> &accounts, double amount)
{
	cout << "\n====Withdrawing the Savings accounts=============\n";
	for (auto &i:accounts) {
		if (i.withdraw(amount))
			cout << "Withdrew amount :" << amount << " from " << i << endl;
		else
			cout << "Failed withdraw of " << amount << " from" << i << endl;
	}


}


//Checking Account

void display(std::vector<Checking_account> &accounts)
{
	cout << "\n===Checking Accounts========================\n";
	for (auto &i : accounts)
		cout << i << endl;
}

void deposit(std::vector<Checking_account> &accounts, double amount)
{
	cout << "\n=====Depositing the Checking accounts=========\n";
	for (auto &i : accounts) {
		if (i.deposit(amount)) {
			cout << "Deposited amount :" << amount << " to " << i << endl;
		}
		else
			cout << "Failed deposit of " << amount << " to " << i << endl;
	}
}

void withdraw(std::vector<Checking_account> &accounts, double amount)
{
	cout << "\n====Withdrawing the Checking accounts=============\n";
	for (auto &i : accounts) {
		if (i.withdraw(amount))
			cout << "Withdrew amount :" << amount << " from " << i << endl;
		else
			cout << "Failed withdraw of " << amount << " from" << i << endl;
	}


}


//Trust Account

void display(std::vector<Trust_account> &accounts)
{
	cout << "\n===Trust Accounts========================\n";
	for (auto &i : accounts)
		cout << i << endl;
}

void deposit(std::vector<Trust_account> &accounts, double amount)
{
	cout << "\n=====Depositing the Trust accounts=========\n";
	for (auto &i : accounts) {
		if (i.deposit(amount)) {
			cout << "Deposited amount :" << amount << " to " << i << endl;
		}
		else
			cout << "Failed deposit of " << amount << " to " << i << endl;
	}
}

void withdraw(std::vector<Trust_account> &accounts, double amount)
{
	cout << "\n====Withdrawing the Trust accounts=============\n";
	for (auto &i : accounts) {
		if (i.withdraw(amount))
			cout << "Withdrew amount :" << amount << " from " << i << endl;
		else
			cout << "Failed withdraw of " << amount << " from" << i << endl;
	}


}
