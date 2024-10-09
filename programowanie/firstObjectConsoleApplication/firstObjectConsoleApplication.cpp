#include <iostream>
#include "BankAccount.h"

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

	firstAccount.DepositToAccount(10.00);
	secondAccount.WidthdrawalFromAccount(10.00);
	secondAccount.TransferBetweenAccounts(firstAccount, 1000);

	firstAccount.GetAccountInfo();
}