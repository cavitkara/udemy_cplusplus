#include<iostream>
#include "Savings_account.h"

using namespace std;

void Savings_account::withdraw(double amount) {

	cout << "Savings account withdraw amount: " << amount << endl;
}

void Savings_account::deposit(double amount) {

	cout << "Savings account deposit amount: " << amount << endl;
}

Savings_account::Savings_account()
	: int_rate{3.0} {

}

Savings_account::~Savings_account() {

}

