#pragma once
class Account {

	friend std::ostream &operator<<(std::ostream &, Account &);

protected:
	double balance;

	public:

		void deposit(double amount);
		void withdraw(double amount);
		Account(double bal);					//Overloaded const
		Account();								//No args const

};