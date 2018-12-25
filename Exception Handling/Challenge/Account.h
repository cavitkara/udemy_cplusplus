#pragma once
#include<iostream>
#include <string>
#include "I_Printable.h"

class Account : public I_Printable {

private:
	static constexpr const char *def_name = "Unnamed Account";
	static constexpr double def_balance = 0.0;

protected:
	std::string name;
	double balance;

public:
	//	Account();						//No args const
	Account(std::string name = def_name, double balance = def_balance);			//O.L. const
	virtual bool deposit(double amount)=0;
	virtual bool withdraw(double x)=0;
	virtual void print(std::ostream &) override;
	double get_balance() const;
	virtual ~Account() = default;

};