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

int main()
{
	task1();
}
