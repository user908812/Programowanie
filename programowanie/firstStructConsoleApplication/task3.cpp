#include <iostream>

using namespace std;

struct bankAccount {
	double balance;
	string owner;
	string currency;
};

void getAccountInfo(bankAccount& acc) {
	cout << "Owner: " << acc.owner << "\n";
	cout << "Your balance: " << acc.balance << "\n";
	cout << "Currency: " << acc.currency << "\n\n";
}

void increaseAccountBalance(bankAccount& acc, double amount) {
	acc.balance += abs(amount);
}
bool decreaseAccountBalance(bankAccount& acc, double amount) {
	if (acc.balance - amount >= 0) {
		acc.balance -= amount;
		return true;
	}
	return false;
}

void transferBetweenAccounts(bankAccount& account1, bankAccount& account2, double amount) {
	if (decreaseAccountBalance(account1, amount) == true) {
		increaseAccountBalance(account2, amount);
	}
}

void task3() {
	bankAccount firstAccount;
	firstAccount.owner = "Jan Nowak";
	firstAccount.balance = 5000;
	firstAccount.currency = "zl";

	bankAccount secondAccount;
	secondAccount.owner = "Ewa Nowak";
	secondAccount.balance = 12000;
	secondAccount.currency = "zl";

	//increaseAccountBalance(firstAccount, 12.99);
	//decreaseAccountBalance(secondAccount, 10.01);

	transferBetweenAccounts(secondAccount, firstAccount, 1000);

	getAccountInfo(firstAccount);
	getAccountInfo(secondAccount);
}