#include <iostream>

using namespace std;

//Napisz program, kt�ry wczyta od u�ytkownika liczb� dodatni�
void task1()
{
	int number;
	/*
	cout << "Podaj liczb� dodatni�\n";
	cin >> number;

	if (number < 0)
	{
		cout << "Podaj liczb� dodatni�\n";
		cin >> number;
		if (number < 0)
		{
			cout << "Podaj liczb� dodatni�\n";
			cin >> number;
			if (number < 0)
			{
				cout << "Podaj liczb� dodatni�\n";
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
//Napisz program, kt�ry wylosuje liczb� 
//a nast�pnie uzytkownik b�dzie musia� j� zgadn��.
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
//Napisz program wy�wietlaj�cy liczby ca�kowite z przedzia�u <0, x) (warto�� x podaje u�ytkownik)
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