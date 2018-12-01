#include <iostream>
#include "Account.h"
#include "Savings_account.h"

using namespace std;
int main(void) {
	// Your code here!

	//Creation of new account class on stack here
	cout << "################# Base Account class instance on stack ###########################\n";
	Account acc{};
	acc.deposit(2000);
	acc.withdraw(500);


	//Creation of a new account class on heap via a pointer
	cout << "###################### Pointer account class on heap ############################" << endl;
	Account *p_acc{ nullptr };
	p_acc = new Account();
	p_acc->deposit(1000);
	p_acc->withdraw(500);

	delete p_acc;



	//Creation of new account Savings_account class
	cout << "################ Savings_account class instance on stack ########################\n";
	Savings_account savings_acc{};
	savings_acc.deposit(2000);
	savings_acc.withdraw(500);

	//Creation of new account Savings_account class via pointer
	cout << "################ Savings_account class instance on heap ########################\n";
	Savings_account *p_sav_acc{nullptr};
	p_sav_acc = new Savings_account();
	p_sav_acc->withdraw(1000);
	p_sav_acc->deposit(500);
	delete p_sav_acc;

	while (1);
	return 0;

}
