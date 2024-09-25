#include <iostream>
using namespace std;

struct bankAccount {
    long double balance;
	string owner;
	string currency;
};

void getAccountInfo(bankAccount &acc) {
	cout << "Owner: " << acc.owner << "\n";
	cout << "Your balance: " << acc.balance << "\n";
	cout << "Currency: " << acc.currency << "\n\n";
}

void increaseAccountBalance(bankAccount& acc, double amount) {
	amount = abs(amount);
	acc.balance += amount;
}
void decreaseAccountBalance(bankAccount& acc, double amount) {
	acc.balance -= amount;
}

void task3() 
{
	bankAccount firstAccount;
	firstAccount.owner = "Jan Nowak";
	firstAccount.balance = 5000;
	firstAccount.currency = "zl";

	increaseAccountBalance(firstAccount, 12.99);
	getAccountInfo(firstAccount);
	
	bankAccount secondAccount;
	secondAccount.owner = "Ewa Nowak";
	secondAccount.balance = 12000;
	secondAccount.currency = "zl";

	decreaseAccountBalance(secondAccount, 10.01);
	getAccountInfo(secondAccount);
}