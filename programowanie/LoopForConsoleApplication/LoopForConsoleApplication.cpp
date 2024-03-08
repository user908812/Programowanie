#include <iostream>

using namespace std;

void task1()
{
	string helloWorld = "Hello World \n";
	int hwCounter;
	cout << "Ile razy program ma wyswietlic hello world?: ";
	cin >> hwCounter;

	cout << endl;
	
	for (long counter = 0; counter != hwCounter; counter++)
		cout << helloWorld;
}
//Napisz program wyswietlajacy na ekranie kolejne liczby naturalne od 1 do 10.
void task2()
{

	for (int i = 0; i <= 10; i++) {
		cout << i << endl;
	}
}

int main()
{
	//task1();
	  task2();
}
