#include <iostream>
#include "Account.h"
#include "Savings_account.h"

using namespace std;

void main() {


	//Account a(1000);

	//a.deposit(500);
	//a.withdraw(1000);

	Savings_account b(2000, 50);
	b.withdraw(500);
	b.deposit(1000);

	//cout << a << endl;
	cout << b << endl;
	while (1);
}