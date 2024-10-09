#pragma once
#include <iostream>

using namespace std;

class BankAccount {

public:
	double balance;
	string owner;
	string currency;

	void GetAccountInfo();

	void DepositToAccount(double amount);
	bool WidthdrawalFromAccount(double amount);
	void TransferBetweenAccounts(BankAccount& targetAccount, double amount);
};