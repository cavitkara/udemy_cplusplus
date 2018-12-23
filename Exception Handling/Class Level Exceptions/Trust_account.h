#pragma once
#include"Savings_account.h"


class Trust_account : public Savings_account {

public:
	bool deposit(double amount) override;
	bool withdraw(double amount) override;
	virtual void print(std::ostream &) override;
	~Trust_account() = default;
	Trust_account(std::string name="Unnamed Trust Account", double balance=1.0, double interest_rate=0.0, unsigned short cnt=0);
private:
	unsigned short withrawal_count;
};