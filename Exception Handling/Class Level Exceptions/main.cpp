#include<iostream>
#include"Account.h"
#include"Account_Util.h"
#include"Checking_account.h"
#include"Savings_account.h"
#include"Trust_account.h"
#include"IllegalBalanceException.h"
#include<vector>
#include<memory>

using namespace std;

void main() {

	try {
		//Account *p = new Checking_account{ "Moe", 100 };
		std::unique_ptr<Account> moes_account = std::make_unique < Checking_account > ("Moe", -100);
	}
	catch (IllegalBalanceException &ex) {
		cerr << "Sorry illegal default Balance value\n";
	}
	cout << "Bye\n";


	while (1); 
}