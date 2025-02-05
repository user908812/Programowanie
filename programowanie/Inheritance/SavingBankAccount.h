#include "BankAccount.h"

class SavingBankAccount : public BankAccount {
private:

	double interestRate;	
public:

	SavingBankAccount() {
		interestRate = 0.05;
	}

	SavingBankAccount(double b, string o, string c, double ir) : BankAccount(b, o, c) {
		interestRate = ir;
	}

	void CalculateInterestRate()
	{
		balance = balance + balance * interestRate;
	}
};

class X : public SavingBankAccount {
	public:
		X() {

		}
};