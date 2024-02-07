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
//Napisz program, który wylosuje liczbê 
//a nastêpnie uzytkownik bêdzie musia³ j¹ zgadn¹æ.
void task2()
{
	int randomNumber;
	int numberFromUser;

	srand(time(0));
	randomNumber = rand() % 101;
	cout << "Podaj liczbe: \n";
	cin >> numberFromUser;

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
int main()
{
	//task1();
	//task2();
	task3();
}