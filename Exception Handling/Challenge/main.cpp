#include<iostream>
#include"Account.h"
#include"Account_Util.h"
#include"Checking_account.h"
#include"Savings_account.h"
#include"Trust_account.h"
#include<vector>
#include"IllegalBalanceException.h"
#include"InsufficentFundException.h"

using namespace std;

std::ostream &operator<<(std::ostream &os, I_Printable &obj) {
	obj.print(os);
	return os;
}

void main() {

	try {
		Savings_account sav("Cavit", 10);
		cout << sav;
	}
	catch (IllegalBalanceException &ex) {
		std::cerr<<ex.what()<<std::endl;
	}

	try {
		Trust_account    trst("Kara", 100, 10);
		cout << trst;
		trst.withdraw(1000);
	}
	catch (InsufficentFundException &ex) {
		cerr << ex.what();
	}


	while (1); 
}