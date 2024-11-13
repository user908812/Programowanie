#pragma once
#include <iostream>

using namespace std;

class BankAccount {

private:
	long double balance;
public:
	BankAccount();
	void SetBalance(long double b);
	void DepositToAccount(double amount);
	void WidthdrawalFromAccount(double amount);
	string owner;
	string currency;
	void GetAccountInfo();
	double GetBalance();
};