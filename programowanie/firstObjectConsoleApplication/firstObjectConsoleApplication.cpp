#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount(double b, string o, string c) 
{
	balance = b;
	owner = o;
	currency = c;
}

void BankAccount::SetBalance(long double b) 
{
	double absBalance = balance * (-1);
	if (b < 0) absBalance = b;
	if (b >= 0) balance = b;
}
double BankAccount::GetBalance() 
{
	return balance;
}

void BankAccount::GetAccountInfo() 
{
	cout << "Balance: " << balance << currency << "\n";
	cout << "Owner: " << owner << "\n";
}
void BankAccount::DepositToAccount(double amount) 
{
	balance += (amount < 0) ? abs(amount) : amount;
}
void BankAccount::WidthdrawalFromAccount(double amount) 
{
	balance -= (amount < 0) ? abs(amount) : amount;
}

int main()
{
    system("color 04");

	BankAccount firstAccount; // obiekt (zmienna typu klasowego)
	firstAccount.SetBalance(0);
	/*firstAccount.currency = "zl";
	firstAccount.owner = "Stanislaw";*/

	BankAccount secondAccount;
	secondAccount.SetBalance(12000);
	/*secondAccount.currency = "zl";*/

	firstAccount.DepositToAccount(10.00);
	secondAccount.WidthdrawalFromAccount(10.00);
	//secondAccount.TransferBetweenAccounts(firstAccount, 1000);

	firstAccount.GetAccountInfo();
	secondAccount.GetAccountInfo();
}