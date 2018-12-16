#include<iostream>
#include"Account.h"
#include"Account_Util.h"
#include"Checking_account.h"
#include"Savings_account.h"
#include"Trust_account.h"
#include<vector>

using namespace std;

std::ostream &operator<<(std::ostream &os, I_Printable &obj) {
	obj.print(os);
	return os;
}

void main() {


	//Accounts

	/*vector<Account *> accs;

	accs.push_back(new Account());
	accs.push_back(Account{ "Cavit" });
	accs.push_back(Account{"Ahmed", 2000});
	accs.push_back(Account{ "Mehmet", 5000 });
	
    display(accs);
	deposit(accs, 1000);
	withdraw(accs, 2000);
	
	//Savings Accounts
	*/
	vector<Account*> acc;

	acc.push_back(new Savings_account("Cavit", 5000));
	acc.push_back(new Checking_account("Hawking", 10000));
	acc.push_back(new Trust_account("Bruce Vayne", 7000));

	display(acc);
	deposit(acc, 3000);
	withdraw(acc, 5000);
	display(acc);


	while (1); 
}