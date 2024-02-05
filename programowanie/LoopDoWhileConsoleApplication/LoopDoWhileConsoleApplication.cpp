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
//
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

	/*
	if (numberFromUser != randomNumber) {
		cout << "Podaj liczbê: \n";
		cin >> numberFromUser;
		if (numberFromUser != randomNumber)
		{
			cout << "Podaj liczbê: \n";
			cin >> numberFromUser;
		}
	}
	*/
}
//pozdro :]
int main()
{
	//task1();
	task2();
}
