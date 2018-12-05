#pragma once
#include<iostream>
#include <string>

class Account {

	friend std::ostream &operator<<(std::ostream &, Account&);

private:
	static constexpr const char *def_name = "Unnamed Account";
	static constexpr double def_balance = 0.0;

protected:
	std::string name;
	double balance;

public:
	//	Account();						//No args const
	Account(std::string name = def_name, double balance = def_balance);			//O.L. const
	bool deposit(double amount);
	bool withdraw(double x);
	double get_balance() const;



};