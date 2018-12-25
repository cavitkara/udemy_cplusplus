#pragma once
#include<vector>
#include"Account.h"

//Utility helper functions for Account class

void display( std::vector<Account *> &accounts);
void deposit(std::vector<Account *> &accounts, double amount);
void withdraw(std::vector<Account *> &accounts, double amount);
