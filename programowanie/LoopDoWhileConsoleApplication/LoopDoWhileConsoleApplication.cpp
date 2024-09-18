#include <iostream>

using namespace std;

//Napisz program, który wczyta od u¿ytkownika liczbê dodatni¹
void task1()
{
	int number;
	/*
	cout << "Podaj liczbê dodatni¹\n";
	cin >> number;

	if (number < 0)
	{
		cout << "Podaj liczbê dodatni¹\n";
		cin >> number;
		if (number < 0)
		{
			cout << "Podaj liczbê dodatni¹\n";
			cin >> number;
			if (number < 0)
			{
				cout << "Podaj liczbê dodatni¹\n";
				cin >> number;
				if (number < 0)
				{
					// ...
				}
			}
		}
	}
	*/

	do 
	{
		cout << "Podaj liczbe dodatnia\n";
		cin >> number;
	} while (number < 0);

	cout << "Podano liczbe " << number << "\n";
}
//Napisz program, który wylosuje liczbê a nastêpnie uzytkownik bêdzie musia³ j¹ zgadn¹æ.
void task2()
{
	int randomNumber;
	int numberFromUser;

/*------------------------------*/
	srand(time(0));
	randomNumber = rand() % 101;
	cout << "Podaj liczbe: \n";
	cin >> numberFromUser;
/*------------------------------*/

	do {
		cout << "Podaj liczbe: \n";
		cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			cout << "Liczba za duza! \n";
		if (numberFromUser < randomNumber)
			cout << "Liczba za mala! \n";
	} while (numberFromUser != randomNumber);

	cout << "Odgadles liczbe! randomowa liczba byla liczba " << randomNumber << "\n";
}
//Napisz program wyœwietlaj¹cy liczby ca³kowite z przedzia³u <0, x) (wartoœæ x podaje u¿ytkownik)
void task3()
{
	long long upperRange;
	cout << "Podaj gorny zakres (0-nieskonczonosc) \n";
	cin >> upperRange;

	cout << "0, ";

	int numberFromUser = 0;
	do
	{
		cout << numberFromUser << ", ";
		numberFromUser++;
	} while (upperRange >= numberFromUser);

	/*
	if (upperRange >= 1)
		cout << "1, ";
		if (upperRange >= 2)
			cout << "2, ";
			if (upperRange >= 3)
				cout << "3, ";
				if (upperRange >= 4) {
					//...
	}
	*/
}
//Napisz program, ktory policzy sume cyfr podanej przez uzytkownika liczby
void task4()
{
	int number;
	do 
	{
		cout << "Podaj liczbe dodatnia: \n";
		cin >> number;
	} while (number < 0);

	int tmpNumber;
	int sumOfDigits = 0;

	do 
	{
		/*
		tmpNumber = -1;
		do
		{
			tmpNumber++;
		} while ((number - tmpNumber) % 10 != 0);
		cout << tmpNumber << ", ";
		*/
		int rest = number % 10;
		// cout << rest << ", ";
		sumOfDigits += rest;

		number /= 10;

	} while (number > 0);
	cout << "Suma cyfr wynosi: " << sumOfDigits << endl;
}
//Napisz program, który poprosi u¿ytkownika o wprowadzenie dowolnej liczby ca³kowitej. Nastêpnie program powinien obliczyæ i wyœwietliæ liczbê cyfr.
void task5()
{
	int number;
	do
	{
		cout << "Podaj liczbe dodatnia: \n";
		cin >> number;

	} while (number < 0);

	int numberOfDigits = 0;

	do 
	{
		number /= 10;
		numberOfDigits++;
	} while (number > 0);
	cout << "Liczba cyfr to: " << numberOfDigits;
}
//Napisz program, który sprawdza czy wiêcej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.
void task6()
{
	int number;
	do
	{
		cout << "Podaj liczbe dodatnia: \n";
		cin >> number;

	} while (number < 0);

	int evenNumber = 0;
	int unEvenNumber = 1;
	int rest = 0;

	do
	{
		rest = number % 10;
		if (rest % 2) {
			evenNumber++;
		}
		else {
			unEvenNumber++;
		}

		number /= 10;
	} while (number > 0);

	if (evenNumber > unEvenNumber) {
		cout << "Wiecej jest liczb parzystych. Liczby parzyste: " << evenNumber;
	}
	else {
		cout << "Wiecej jest liczb nieparzystych. Liczby nieparzyste: " << unEvenNumber;
	}
}
//Poproœ u¿ytkownika o podawanie liczb, a¿ wprowadzi zero. Oblicz sumê oraz œredni¹ arytmetyczn¹ wprowadzonych liczb.
void task7()
{
	int number;
	do
	{
		cout << "Podaj liczbe dodatnia: \n";
		cin >> number;
	} while (number < 0);

	int tmpNumber;
	int sumOfDigits = 0;

	do
	{
		int rest = number % 10;
		sumOfDigits += rest;

		number /= 10;

	} while (number > 0);
	cout << "Suma cyfr wynosi: " << sumOfDigits << endl;
}
int main() { 
	task6(); 
}