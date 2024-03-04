#include <iostream>

using namespace std;

//Napisz program, ktory policzy sume cyfr podanej przez uzytkownika liczby.
void task1()
{
	int numberFromUser;
	
	cout << "Podaj liczbe wieksza od 0: \n";
	cin >> numberFromUser;

	int sumOfDigits = 0;

	if (numberFromUser > 0) {
		while (numberFromUser > 0) {
			numberFromUser /= 10;
			sumOfDigits++;
		}
		cout << "Liczba cyfr twojej liczby to: " << sumOfDigits << ".\n";
	}
	else 
		cout << "Liczba nie jest wieksza od 0! Sprobuj ponownie! \n";
}

//Napisz program, który policzy NWD dwóch liczb.
void task2()
{
	/*
	 b==0, nwd = a
	 b != 0, nwd = b, a % b (18 / 12) (reszta z dzielenia)
	*/

	int a, b;
	cout << "Podaj pierwsza liczbe: \n";
	cin >> a;
	cout << "Podaj druga liczbe: \n";
	cin >> b;

	if (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
		if (b != 0) {
			//...
		}
		cout << "NWD = " << a << "\n";
		}
	}
int main()
{
	//task1();
	  task2();
}
