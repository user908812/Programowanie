#pragma once
#include <iostream>

using namespace std;

class BankAccount {
protected:
	double balance;
	string owner;
	string currency;

	void SetBalance(long double b);
public:
	BankAccount();
	BankAccount(double b, string o, string c);
	void DepositToAccount(double amount);
	bool WidthdrawalFromAccount(double amount);
	void TransferBetweenAccounts(BankAccount& targetAccount, double amount);
	void GetAccountInfo();
	double GetBalance();
};