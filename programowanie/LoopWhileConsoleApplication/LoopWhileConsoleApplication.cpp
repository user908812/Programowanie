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
//NWD(a,b) = a jeœli b = 0
//NWD(a,b) = NWD(b, a%b) jeœli b != 0
void task2()
{
	int a;
	std::cout << "Podaj pierwsz¹ liczbê\n";
	std::cin >> a;

	int b;
	std::cout << "Podaj drug¹ liczbê\n";
	std::cin >> b;
	/*
	if (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
		if (b != 0)
		{
			//...
		}
	}
	*/
	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
	}

	std::cout << "NWD = " << a << "\n";
}
//Miasto T. ma obecnie 100 tys. mieszkañców, ale jego populacja roœnie co roku o 3% rocznie. 
//Miasto B. ma 300 tys. mieszkañców i ta liczba roœnie w tempie 2% na rok.
// Wykonaj symulacjê prezentuj¹c¹ liczbê mieszkañców w obu miastach i zatrzymuj¹c¹ siê, 
// gdy liczba mieszkañców miasta T. przekroczy liczbê z miasta B.

void task3()
{
	/*
	double cityT = 100000,
		double	cityB = 300000;

	int year = 0;

	while (cityT < cityB)
	{
		cityT = cityT * 1.03;
		cityB = cityB * 1.02;
		year++;
	}
	cout << "Miasto T przegoni Miasto B po " << year << " latach\n";
	*/
}
//Sprawdzanie czy liczba jest palindromem.
void task4()
{
	int number;
	cout << "Podaj liczbe dodatnia: \n";
	cin >> number;

	int tmpNumber = number;
	int reverseNumber = 0;

	while (tmpNumber > 0)
	{
		int rest = tmpNumber % 10;
		reverseNumber = reverseNumber * 10 + rest;
		tmpNumber = tmpNumber / 10;
	}
	if (number == reverseNumber)
		cout << "Liczba jest palindromem.\n";
	else
		cout << "Liczba nie jest palindromem.\n";
}
//Napisz program, ktory wyswietli "Hello World" tyle razy ile chce uzytkownik
void task5()
{
	string helloWorld = "Hello World";
	int hwCounter;
	cout << "Ile razy program ma wyswietlic hello world?: ";
	cin >> hwCounter;

	cout << endl;

	int counter = 0;

	while (counter != hwCounter) {
		cout << helloWorld << "\n";
		counter++;
	}
}
int main(){ task5(); }