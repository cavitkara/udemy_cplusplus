#include <iostream>
#include "Account.h"

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

	return 0;

}
