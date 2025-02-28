#pragma once
#include <iostream>

using namespace std;

class BankAccount {	
private:
	double balance;
	string owner;
	string currency;

	void SetBalance(long double b);
public:
	BankAccount();
	BankAccount(double b, string o, string c);
	void DepositToAccount(double amount);
	void WidthdrawalFromAccount(double amount);
	void GetAccountInfo();
	double GetBalance();
};