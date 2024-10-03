#include <iostream>

using namespace std;

class BankAccount {

public:
	double balance;
	string owner;
	string currency;

	void GetAccountInfo() { // metoda -> funkcja w klasie
		cout << "Owner: " << owner << "\n";
		cout << "Your balance: " << balance << "\n";
		cout << "Currency: " << currency << "\n\n";
	}

	void increaseAccountBalance(double amount) {
		balance += abs(amount);
	}
};

bool decreaseAccountBalance(BankAccount& acc, double amount) {
	if (acc.balance - amount >= 0) {
		acc.balance -= amount;
		return true;
	}
	return false;
}

void transferBetweenAccounts(BankAccount& account1, BankAccount& account2, double amount) {
	if (decreaseAccountBalance(account1, amount) == true) {
		account2.increaseAccountBalance(amount);
	}
}

int main()
{
    system("color 04");

	BankAccount firstAccount; // obiekt (zmienna typu klasowego)
	firstAccount.owner = "Jan Nowak";
	firstAccount.balance = 5000;
	firstAccount.currency = "zl";

	BankAccount secondAccount;
	secondAccount.owner = "Ewa Nowak";
	secondAccount.balance = 12000;
	secondAccount.currency = "zl";

	firstAccount.increaseAccountBalance(10.00);
	decreaseAccountBalance(secondAccount, 10.00);
	transferBetweenAccounts(secondAccount, firstAccount, 1000);

	firstAccount.GetAccountInfo();
}