#include <iostream>
using namespace std;
/*
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* gdsgdgdrghdrh
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
--------------------------------------------------------------------------
	Jak jest 1 cout to nie trzeba pisac nawiasow klamrowych:                          <-------------
--------------------------------------------------------------------------

if (1 > 2)
	cout << "Najwieksza wartosc to 1";

---------------------------Task2:----------------------------------------

if (number2 > 9 || number2 < 1) {
		cout << "liczba nie nalezy do przedzialu \n";
	} else {
	cout << "liczba nalezy do przedzialu \n";
	}

---------------------------Priorytety operator�w:------------------------
* /
+ -
> < >= <= == !=
&&
||
=
---------------------------Operatory por�wnania:-------------------------
> wi�kszosci
< mniejszosci
>= wieksze badz rowne
<= mniejsze badz rowne
== rowne
!= r�ne
---------------------------Operatory logiczne:---------------------------
|| or / lub
&& and / i
!  not / nie

A  B	A || B	A && B	!A
f  f	  f		  f      t
f  t	  t       f
t  f	  t       f      f
t  t	  t       t
-------------------------------------------------------------------------
*/

void task1() 
{
	//Napisz program ktory pobierze liczbe od uzytkownika i wyswietli czy jest ona dodatnia czy nie
	using namespace std;
	int number;
	cout << "Podaj liczbe \n";
	cin >> number;

	if (number == 0) {
		cout << "Liczba wynosi 0 \n";
	} else if (number > 0) {
		cout << "Liczba wieksza od 0 \n";
	} else {
		cout << "Liczba mniejsza od 0 \n";
	}
}
void task2()
{
	using namespace std;
	int number2;
	cout << "Podaj liczbe \n";
	cin >> number2;
}

	/*---------------------------------------------------------------wersja 1---------------------------------------------------------------
		if (number2 >= 1)
		{
			if (number2 < 10)
			{
				cout << "liczba jest w zakresie \n";
			}
			else
			{
				cout << "liczba nie jest w zakresie \n";
			}
		}
		else
		{
			cout << "liczba nie jest w zakresie \n";
		}
	/*---------------------------------------------------------------wersja 2---------------------------------------------------------------
		if (number2 >= 1 && number2 < 10)
		{
			if (number2 < 10)
			{
				cout << "liczba jest w zakresie \n";
			}
			else
			{
				cout << "liczba nie jest w zakresie \n";
		}
	--------------------------------------------------------------------------------------------------------------------------------------*/

	void task3()
	{
		using namespace std;
		int firstNumber;
		cout << "Podaj liczbe\n";
		cin >> firstNumber;

		cout << "Najwieksza wartosc to: " << firstNumber << "\n";
	}

	void task4()
	{
		using namespace std;
		int firstNumber, secondNumber;
		cout << "Podaj liczbe\n";
		cin >> firstNumber;
		cout << "Podaj liczbe\n";
		cin >> secondNumber;

		if (firstNumber > secondNumber) 
		{
			cout << "Liczba " << firstNumber << " jest wieksza\n";
		}
		else if (firstNumber == secondNumber)
		{
			cout << "Liczby sa rowne";
		}
		else 
		{
			cout << "Liczba " << secondNumber << " jest wieksza\n";
		}
	}

	void task5()
	{
		using namespace std;
		int firstNumber, secondNumber, thirdNumber;
		cout << "Podaj liczbe\n";
		cin >> firstNumber;
		cout << "Podaj liczbe\n";
		cin >> secondNumber;
		cout << "Podaj liczbe\n";
		cin >> thirdNumber;

		/*
		if (firstNumber > secondNumber && firstNumber > thirdNumber)
		{
			cout << "Liczba " << firstNumber << " jest najwieksza";
		}
		else if (secondNumber > firstNumber && secondNumber > thirdNumber)
		{
			cout << "Liczba " << secondNumber << " jest najwieksza";
		}
		else
		{
			cout << "Liczba " << thirdNumber << " jest najwieksza";
		}
		*/
		
		if (thirdNumber > firstNumber && thirdNumber > secondNumber)
			cout << "Najwieksza wartosc to " << thirdNumber << "\n";
		else
		{
			if (secondNumber > firstNumber)
				cout << "Najwieksza wartosc to " << secondNumber << "\n";
			else
				cout << "Najwieksza wartosc to " << firstNumber << "\n";
		}
	}
	void task6()
	{
		using namespace std;
		int firstNumber, secondNumber, thirdNumber, fourthNumber;
		cout << "Podaj pierwsza liczbe ";
		cin >> firstNumber;
		cout << "Podaj druga liczbe ";
		cin >> secondNumber;
		cout << "Podaj trzecia liczbe ";
		cin >> thirdNumber;
		cout << "Podaj czwarta liczbe ";
		cin >> fourthNumber;

		if (firstNumber > secondNumber && firstNumber > thirdNumber && firstNumber > fourthNumber)
		{
			cout << "Liczba " << firstNumber << " jest najwieksza \n";
		}
		else if (secondNumber > firstNumber && secondNumber > thirdNumber && secondNumber > fourthNumber) 
		{
			cout << "Liczba " << secondNumber << " jest najwieksza \n";
		}
		else if (thirdNumber > firstNumber && thirdNumber > secondNumber && thirdNumber > fourthNumber)
		{
			cout << "Liczba " << thirdNumber << " jest najwieksza \n";
		}
		else
		{
			cout << "Liczba " << fourthNumber << " jest najwieksza \n";
		}
	}
	// Napisz program ktory wczyta 1 liczbe i wyswietli ja w kolejnosci rosnacej
	void task7()
	{
		using namespace std;
		int firstNum;
		cout << "Podaj pierwsza liczbe: ";
		cin >> firstNum;
		cout << "Liczby w kolejnosci rosnacej:\n";
		cout << firstNum;
		cout << "\n";
	}
	void task8()
	{
		using namespace std;
		int firstNum, secondNum;
		cout << "Podaj pierwsza liczbe:	";
		cin >> firstNum;
		cout << "Podaj druga liczbe: ";
		cin >> secondNum;
		if (firstNum > secondNum) {
			cout << firstNum << "," << secondNum;
		}
		else {
			cout << secondNum << "," << firstNum;
		}
	}
	void task9()
	{
		using namespace std;
		int firstNum, secondNum, thirdNum;
		cout << "Podaj pierwsza liczbe: ";
		cin >> firstNum;
		cout << "Podaj druga liczbe: ";
		cin >> secondNum;
		cout << "Podaj trzecia liczbe: ";
		cin >> thirdNum;

		if (firstNum > secondNum && firstNum > thirdNum) {
			if (secondNum > thirdNum && secondNum < firstNum) {
				cout << firstNum << "," << secondNum << "," << thirdNum;
			}
			if (secondNum < thirdNum && thirdNum < firstNum) {
				cout << firstNum << "," << thirdNum << "," << secondNum;
			}
		}
		if (secondNum > firstNum && secondNum > thirdNum) {
			if (firstNum > thirdNum && firstNum < secondNum) {
				cout << secondNum << "," << firstNum << "," << thirdNum;
			}
			if (firstNum < thirdNum && thirdNum < secondNum) {
				cout << secondNum << "," << thirdNum << "," << firstNum;
			}
		}
		if (thirdNum > firstNum && thirdNum > secondNum) {
			if (firstNum > secondNum && firstNum < thirdNum) {
				cout << thirdNum << "," << firstNum << "," << secondNum;
			}
			if (firstNum < secondNum && secondNum < thirdNum) {
				cout << thirdNum << "," << secondNum << "," << firstNum;
			}
		}
		else {
			cout << "2 lub 3 liczby sa rowne! Sprobuj ponownie!";
		}
	}

	// Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i sprawdzi, czy s� one r�wne.Wy�wietl odpowiedni komunikat.
	void zad1()
	{
		using namespace std;
		int num1, num2;
		cout << "Podaj pierwsza liczbe: ";
		cin >> num1;
		cout << "Podaj pierwsza liczbe: ";
		cin >> num2;
		if (num1 == num2) {
			cout << "Liczby sa rowne";
		}
		else {
			cout << "Liczby nie sa rowne";
		}
	}
	// Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona parzysta.Wy�wietl odpowiedni komunikat.
	void zad2()
	{
		using namespace std;
		int num;
		cout << "Podaj liczbe:	";
		cin >> num;
		int rest = num % 2;
		if (rest == 0) {
			cout << "Liczba " << num << " jest liczba parzysta";
		}
		else {
			cout << "Liczba " << num << " jest liczba nieparzysta";
		}
	}
	// Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.
	void zad3()
	{
		using namespace std;
		int num;
		cout << "Podaj liczbe: ";
		cin >> num;
		int devisionBy3 = num % 3;
		int devisionBy5 = num % 5;
		if (devisionBy3 == 0) {
			cout << "Liczba podzielna przez 3.\n";
		}
		else {
			cout << "Liczba niepodzielna przez 3\n";
		}
		if (devisionBy5 == 0) {
			cout << "Liczba podzielna przez 5.\n";
		}
		else {
			cout << "Liczba niepodzielna przez 5\n";
		}
	}
	// Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a (w kilogramach) i wzrostu (w metrach).
	void zad4()
	{
		using namespace std;
		float bodyWeight, Height;
		cout << "Podaj swoj wzrost: ";
		cin >> Height;
		cout << "Podaj swoj wzrost: ";
		cin >> bodyWeight;
		cout << "Wazysz " << bodyWeight << "kg, twoj wzrost to " << Height << "m.";
	}
	/* Na podstawie tych danych oblicz wska�nik BMI(Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
		BMI = masa / wzrost ^ 2

		poni�ej 16 - wyglodzenie
		16 - 16.99 - wychudzenie
		17 - 18.49 - niedowag�
		18.5 - 24.99 - wag� prawid�ow�
		25.0 - 29.9 - nadwag�
		30.0 - 34.99 - I stopie� oty�o�ci
		35.0 - 39.99 - II stopie� oty�o�ci
		powy�ej 40.0 - oty�o�� skrajn� */
	void zad5()
	{
		using namespace std;
		float bodyWeight, Height;
		cout << "Podaj swoj wzrost: ";
		cin >> Height;
		cout << "Podaj swoja wage: ";
		cin >> bodyWeight;
		float bmi = bodyWeight / (Height * Height);

		if (bmi < 16) {
			cout << "Twoje bmi to " << bmi << " - wyglodzenie";
		}
		else if (bmi >= 16 && bmi < 17) {
			cout << "Twoje bmi to " << bmi << " - wychudzenie";
		}
		else if (bmi >= 17 && bmi <= 18.49) {
			cout << "Twoje bmi to " << bmi << " - niedowaga";
		}
		else if (bmi >= 18.5 && bmi <= 24.99) {
			cout << "Twoje bmi to " << bmi << " - waga prawidlowa";
		}
		else if (bmi >= 25 && bmi <= 29.9) {
			cout << "Twoje bmi to " << bmi << " - nadwaga";
		}
		else if (bmi >= 30 && bmi <= 34.99) {
			cout << "Twoje bmi to " << bmi << " - I stopie� oty�o�ci";
		}
		else if (bmi >= 35 && bmi <= 39.99) {
			cout << "Twoje bmi to " << bmi << " - II stopie� oty�o�ci";
		}
		else if (bmi >= 40) {
			cout << "Twoje bmi to " << bmi << " - otylosc skrajna";
		}
		else {
			cout << "Nieprawidlowe bmi! Sprobuj ponownie!";
		}
	}
	// Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
	void zad6()
	{
		using namespace std;
		int num;
		cout << "Podaj liczbe 1-7: ";
		cin >> num;
		if (num == 1)
		{
			cout << "Poniedzialek";
		}
		else if (num == 2)
		{
			cout << "Wtorek";
		}
		else if (num == 3)
		{
			cout << "Sroda";
		}
		else if (num == 4)
		{
			cout << "Czwartek";
		}
		else if (num == 5)
		{
			cout << "Piatek";
		}
		else if (num == 6)
		{
			cout << "Sobota";
		}
		else if (num == 7)
		{
			cout << "Niedziela";
		}
		else {
			cout << "Blad! Podaj numer od 1 do 7!";
		}
	}
	// Napisz program, kt�ry wczyta numer miesi�ca i wy�wietli jego s�owny odpowiednik.
	void zad7()
	{
		using namespace std;
		int month;
		cout << "Podaj numer 1-12 \n";
		cin >> month;
		if (month == 1)
		{
			cout << "styczen";
		}
		else if (month == 2)
		{
			cout << "luty";
		}
		else if (month == 3)
		{
			cout << "marzec";
		}
		else if (month == 4)
		{
			cout << "kwiecien";
		}
		else if (month == 5)
		{
			cout << "maj";
		}
		else if (month == 6)
		{
			cout << "czerwiec";
		}
		else if (month == 7)
		{
			cout << "lipiec";
		}
		else if (month == 8)
		{
			cout << "sierpien";
		}
		else if (month == 9)
		{
			cout << "wrzesiec";
		}
		else if (month == 10)
		{
			cout << "pazdziernik";
		}
		else if (month == 11)
		{
			cout << "listopad";
		}
		else if (month == 12)
		{
			cout << "grudzien";
		}
		else {
			cout << "Nieprawidlowa liczba! wpisz liczbe 1-12!";
		}
	}
	// Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny.Wy�wietl odpowiedni komunikat.
	void zad8()
	{
		using namespace std;
		int year;
		cout << "Wpisz dowolny rok:\n";
		cin >> year;
		int rok_przestepny = year % 4;
		if (rok_przestepny == 0) {
			cout << year << " to rok przestepny";
		}
		else {
			cout << "Rok nie jest przestepny";
		}
		
	}
	// Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�. Wy�wietl wynik.
	void zad9()
	{
		using namespace std;
		int yourNumber;
		cout << "Podaj dowolna liczbe calkowita \n";
		cin >> yourNumber;
		if (yourNumber < 0)
		{
			cout << "wartosc bezwzgledna to " << yourNumber - (yourNumber * 2);
		}
		else if (yourNumber > 0)
		{
			cout << "wartosc bezwzgledna to " << yourNumber;
		}
		else if (yourNumber == 0)
		{
			cout << "Wartosc bezwzgledna to 0";
		}
	}
	// Napisz program, kt�ry poprosi u�ytkownika o podanie wieku i sprawdzi, czy osoba jest pe�noletnia. Wy�wietl odpowiedni komunikat.
	void zad10()
	{
		using namespace std;
		int age;
		cout << "Podaj swoj wiek \n";
		cin >> age;
		if (age >= 18)
		{
			cout << "Jestes pelnoletni!";
		}
		else if (age < 18 && age > 0)
		{
			cout << "Niestety ale nie jestes jeszcze pelnoletni!";
		}
		else {
			cout << "Nieprawidlowe dane!";
		}
	}
	// Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t. Wy�wietl odpowiedni komunikat.
	void zad11()
	{
		
	}
	// Napisz program, kt�ry poprosi u�ytkownika o podanie oceny w skali 100 - punktowej i przeliczy j� na ocen� procentow� w przedziale od 0 do 100. Wy�wietl wynik.
	void zad12()
	{

	}
	// Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
	void zad13()
	{
		int mark;
		cout << "Podaj ocene 1-6";
		cin >> mark;
		if (mark == 6) {
			cout << "Celujacy";
		}
		else if (mark == 5) {
			cout << "Bardzo dobry";
		}
		else if (mark == 4) {
			cout << "Dobry";
		}
		else if (mark == 3) {
			cout << "Dostateczny";
		}
		else if (mark == 2) {
			cout << "Dopuszczajacy";
		}
		else if (mark == 1) {
			cout << "Niedostateczny";
		}
		else {
			cout << "Podaj ocene 1-6!";
		}
	}
	// Program sprawdzaj�cy czy podana data jest poprawna(np.sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
	void zad14()
	{
		int day, month, year;
		cout << "Podaj dzien 1-31 \n";
		cin >> day;
		if (day > 0 && day < 32)
		{
			cout << "Dzien jest prawidlowy";
		}
		else {
			cout << "Dzien jest nieprawidlowy \n";
		}

		cout << "Podaj miesiac 1-12 \n";
		cin >> month;
		if (month > 0 && month < 13)
		{
			cout << "Miesiac jest nieprawidlowy";
		}
		else {
			cout << "Miesiac jest prawidlowy";
		}

		cout << "Podaj rok";
		cin >> year;
		if (year)
		{
			cout << "Rok Nieprawidlowy";
		}
		else {
			cout << "Rok prawidlowy";
		}
	}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();

/*	Zadania	 
	 zad1();
	 zad2();
	 zad3();
	 zad4();
	 zad5();
	 zad6();
	 zad7();
	 zad8();
	 zad9();
	
	zad10();*/
	zad3();
	
}