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

int main()
{
	task1();
}
