#include <iostream>
#include "BankAccount.h"

using namespace std;

BankAccount::BankAccount() {
	balance = 0;
	owner: "Unknown";
	currency: "zl";
}

BankAccount::BankAccount(double b, string o, string c) {
	balance = b;
	owner = o;
	currency = c;
}

void BankAccount::GetAccountInfo() { // metoda -> funkcja w klasie
	cout << "Owner: " << owner << "\n";
	cout << "Your balance: " << balance << "\n";
	cout << "Currency: " << currency << "\n\n";
}

void BankAccount::DepositToAccount(double amount) {
	balance += abs(amount);
}

bool BankAccount::WidthdrawalFromAccount(double amount) {
	amount = abs(amount);
	if (balance - amount >= 0) {
		balance -= amount;
		return true;
	}
	return false;
}

void BankAccount::TransferBetweenAccounts(BankAccount& targetAccount, double amount) {
	if (WidthdrawalFromAccount(amount) == true) {
		targetAccount.DepositToAccount(amount);
	}
}