#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	fstream file("przyklad.txt");
	vector<int> numbers;

	int n;
	while (file >> n) {
		numbers.push_back(n);
	}

	for (int i = 0; i < numbers.size(); i++)
	{
		file >> numbers[i];
	}

	cout << "Odczytane liczby: \n";
	for (int num:numbers)
	{
		cout << num << ", ";
	}
	cout << '\n';

	cout << "\nZadanie 4.1:\n";

	int counter = 0;
	for (int num : numbers) {
		int firstDigit;
		int lastDigit = num % 10;

		while (num != 0) {
			firstDigit = num % 10;
			num /= 10;
		}

		if (firstDigit == lastDigit) {
			counter++;
		}
	}
	cout << counter << '\n';

}  