#include "Trust_account.h"

bool Trust_account::deposit(double amount)
{
	if (Savings_account::deposit(amount))
		if (amount >= 5000) {
			Account::deposit(50.00);
		}
	return false;
}

bool Trust_account::withdraw(double amount)
{
	if (withrawal_count >= 3) {
		std::cout << "Failed withdraw: " << amount << " from " << *this << " wtdrw cnt : " << withrawal_count << std::endl;
		return false;
	} 
	
	if (Savings_account::withdraw(amount)) {
		withrawal_count++;
		return true;
	}
	return false;
}

Trust_account::Trust_account(std::string n, double b, double ir, unsigned short cnt)
: Savings_account(n, b, ir), withrawal_count{cnt}
{

}