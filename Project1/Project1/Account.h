#pragma once

class Account {


public:

	double balance;
	std::string name;
	void withdraw(double);
	void deposit(double);

	Account();
	~Account();

};