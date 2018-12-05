#pragma once
#include<vector>
#include"Account.h"
#include"Savings_account.h"

//Utility helper functions for Account class

void display( std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

//Utility helper functions for Savings_account 
void display( std::vector<Savings_account> &accounts);
void deposit(std::vector<Savings_account> &accounts, double amount);
void withdraw(std::vector<Savings_account> &accounts, double amount);
