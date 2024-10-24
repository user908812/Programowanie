#pragma once
#include <iostream>

using namespace std;

class BankAccount {

private:
	long double balance;
	string owner;
	string currency;

public:
	void GetAccountInfo();

	void DepositToAccount(double amount);
	bool WidthdrawalFromAccount(double amount);
	void TransferBetweenAccounts(BankAccount& targetAccount, double amount);
};