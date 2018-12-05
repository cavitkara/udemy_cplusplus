#include<iostream>
#include"Account.h"
#include"Account_Util.h"
#include<vector>

using namespace std;

void main() {


	//Accounts

	vector<Account> accs;

	accs.push_back(Account());
	accs.push_back(Account{ "Cavit" });
	accs.push_back(Account{"Ahmed", 2000});
	accs.push_back(Account{ "Mehmet", 5000 });
	
    display(accs);
	deposit(accs, 1000);
	withdraw(accs, 2000);
	
	//Savings Accounts

	vector<Savings_account> sav;

	sav.push_back(Savings_account());
	sav.push_back(Savings_account{ "Superman" });
	sav.push_back(Savings_account{ "Batman", 2000 });
	sav.push_back(Savings_account{ "Karaoglan", 5000, 5.0 });

	display(sav);
	deposit(sav, 1000);
	withdraw(sav, 2000);

	while (1);
}