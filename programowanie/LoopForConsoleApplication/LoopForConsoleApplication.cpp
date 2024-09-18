#include <iostream>

using namespace std;

// Napisz program, ktory wyswietla 'Hello World' tyle razy, ile napisze to uzytkownik.
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
/* Program ktory drukuje na ekranie prostokat z literek X.Wysokosc i szerokosc wczytujemy z klawiatury.

	width = 3
	height = 3

	XXX
	XXX
	XXX

*/
void task3()
{
	int width, height;
	char X = 'X';

	cout << "Podaj szerokosc: \n";
	cin >> width;
	cout << "Podaj wysokosc: \n";
	cin >> height;

	for (int rowNumber = 0; rowNumber < height; rowNumber++) {
		for (int colNumber = 0; colNumber < width; colNumber++) {
			cout << X;
		}
		cout << "\n";
	}
}


/*
* Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
* Program obliczający n!.
* Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
* Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
* Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
* Program obliczający sumę kwadratów liczb od 1 do 10
* Program, który wczyta podstawę oraz wykładnik oraz wyliczy wynik.
* Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)

* Program, kóry wyświetli poniższe wzory:
	****     *       54321        121212        122333
	***     ***      65432        212121        223334444
	**     *****     76543        121212        333444455555
	*     *******    87654        212121        444455555666666

* Oblicz sumę szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π (suma szeregu jest równa π2/6). Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.

* Napisz program, który rozkłoży liczbę na czynniki pierwsze.

*/

// Program obliczający sumę liczb od 1 do 100
void task4()
{
	for (int number = 0; number <= 100; number++) 
	{
		cout << number << '+';
	}
}
// Program sprawdzający czy podana liczba jest liczbą doskonałą (czyli taką, której suma dzielników (z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
void task5()
{
	//ser
}

int main() { 
	task4();
}