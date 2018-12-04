#include <iostream>
#include "Account.h"

using namespace std;


void Account::withdraw(double amount) {
	if ((balance - amount) < 0) {
		cout << "No need enough funds!!!\n";
		return;
	}
	cout << "Account withdraw -" << amount << endl;
	balance -= amount;

}

void Account::deposit(double amount) {
	balance += amount;
	cout << "Account deposit: +" << amount << endl;
}

Account::Account(double bal) : balance(bal) {
	cout << "Balance :"<<bal << endl;
};    //Overloaded const
Account::Account() : Account(0) {};				  //No args const
	
std::ostream &operator<<(std::ostream &os, Account &obj) {
	os << "Account: Balance: " << obj.balance << endl;
	return os;
}