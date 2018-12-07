#include<iostream>
#include"Account.h"
#include"Account_Util.h"
#include"Checking_account.h"
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


	//checking Account;

	vector<Checking_account> check;

	check.push_back(Checking_account());
	check.push_back(Checking_account{ "Ali" });
	check.push_back(Checking_account{ "Veli", 1000 });
	check.push_back(Checking_account{ "Selim", 5000 });

	display(check);
	deposit(check, 1000);
	withdraw(check,2000);



	//Trust Account;

	vector<Trust_account> trst;

	trst.push_back(Trust_account());
	trst.push_back(Trust_account{ "Newton" });
	trst.push_back(Trust_account{ "Einstein", 1000, 5 });
	trst.push_back(Trust_account{ "Hawking", 2000, 10 });

	display(trst);
	deposit(trst, 5000);
	withdraw(trst, 2000);
	withdraw(trst, 750);
	withdraw(trst, 750);
	withdraw(trst, 750);


	while (1);
}