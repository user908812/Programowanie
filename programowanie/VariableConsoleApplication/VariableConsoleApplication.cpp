/*
prawy przycisk myszy, set as startup project
*/
<<<<<<< HEAD
#include <iostream>

void wiek()
=======


/*

                                                                       * ZADANIA *


* Napisz program, ktÃ³ry poprosi uÂ¿ytkownika o podanie promienia koÂ³a i obliczy pole tego koÂ³a, wyÅ“wietlajÂ¹c wynik.

* Napisz program, ktÃ³ry poprosi uÂ¿ytkownika o podanie dÂ³ugoÅ“ci podstawy a, podstawy b i wysokoÅ“ci h trapezu, a nastÃªpnie obliczy pole tego trapezu, wyÅ“wietlajÂ¹c wynik.

* Napisz program, ktÃ³ry poprosi uÂ¿ytkownika o podanie dÂ³ugoÅ“ci krawÃªdzi szeÅ“cianu i obliczy jego objÃªtoÅ“Ã¦, wyÅ“wietlajÂ¹c wynik.

* Napisz program, ktÃ³ry poprosi uÂ¿ytkownika o podanie temperatury w stopniach Celsiusza, a nastÃªpnie przeliczy jÂ¹ na stopnie Fahrenheita i wyÅ“wietli wynik.

* Napisz program, ktÃ³ry konwertuje wprowadzonÂ¹ kwotÃª w jednej walucie na innÂ¹, korzystajÂ¹c z okreÅ“lonego kursu wymiany.

* Napisz program, ktÃ³ry poprosi uÂ¿ytkownika o podanie dwÃ³ch liczb (a, b) i obliczy Å“redniÂ¹ arytmetycznÂ¹ tych liczb. NastÃªpnie wyÅ“wietli wynik.

* Napisz program, ktÃ³ry poprosi uÂ¿ytkownika o podanie trzech liczb (a, b, c) i obliczy Å“redniÂ¹ arytmetycznÂ¹ tych liczb. NastÃªpnie wyÅ“wietli wynik.

* Program obliczajÂ¹cy Å“redniÂ¹ waÂ¿onÂ¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

* Napisz program, ktÃ³ry poprosi uÂ¿ytkownika o podanie dwÃ³ch liczb caÂ³kowitych. NastÃªpnie wykona operacje (+, -, *, /) i wyÅ“wietli wyniki.

* Napisz program, ktÃ³ry poprosi uÂ¿ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyÅ“wietlajÂ¹c wynik.

* Napisz program, ktÃ³ry poprosi uÂ¿ytkownika o podanie wspÃ³Â³rzÃªdnych (x1, y1) i (x2, y2) dwÃ³ch punktÃ³w w ukÂ³adzie kartezjaÃ±skim, a nastÃªpnie obliczy odlegÂ³oÅ“Ã¦ miÃªdzy nimi, wyÅ“wietlajÂ¹c wynik.


*/



#include <iostream>

void wiek() 
>>>>>>> a3b3ebf92b0ba63999bdf2926dd1eb62a89f19b2
{
	// napisz program, ktory wczyta od uzytkownika jego wiek a nastepnie wyswietli go na konsoli
	short wiek;
	std::cout << "Podaj swoj wiek. \n";
	std::cin >> wiek;
	std::cout << "masz " << wiek << " lat. \n";
}
void zmianajednostek()
{
	float m;
	std::cout << "Podaj dlugosc w metrach \n";
	std::cin >> m;

	float cm = m * 100;
	float mm = cm * 10;
	float km = m / 1000;

	std::cout << "Metry: " << m << "\n";
	std::cout << "Centymetry: " << cm << "\n";
	std::cout << "Milimetry: " << mm << "\n";
	std::cout << "Kilometry: " << km << "\n";
}

void task1()
{
<<<<<<< HEAD
	//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci boku a i b prostok¹ta, a nastêpnie obliczy i wyœwietli pole prostok¹ta. /  jsbhfisi
	float bok1, bok2;
=======
	//Napisz program, ktÃ³ry poprosi uÂ¿ytkownika o podanie dÂ³ugoÅ“ci boku a i b prostokÂ¹ta, a nastÃªpnie obliczy i wyÅ“wietli pole prostokÂ¹ta. /  jsbhfisi
	float bok1, bok2;	
>>>>>>> a3b3ebf92b0ba63999bdf2926dd1eb62a89f19b2
	std::cout << "Podaj bok a \n";
	std::cin >> bok1;
	std::cout << "Podaj bok b \n";
	std::cin >> bok2;
	std::cout << "Pole prostokata wynosi: " << bok1 * bok2;
}

<<<<<<< HEAD
void task2()
{
	//napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy i wysokoœci trójk¹ta, a nastêpnie obliczy pole tego trójk¹ta, wyœwietlaj¹c wynik.
	float a, h;
	std::cout << "podaj dlugosc podstawy trojkata";
	std::cin >> a;
	std::cout << "podaj wysokosc trojkata";
=======
void trojkat()
{
	//Napisz program, ktÃ³ry poprosi uÂ¿ytkownika o podanie dÂ³ugoÅ“ci podstawy i wysokoÅ“ci trÃ³jkÂ¹ta, a nastÃªpnie obliczy pole tego trÃ³jkÂ¹ta, wyÅ“wietlajÂ¹c wynik.
	float a, h;
	std::cout << "Podaj dlugosc podstawy trojkata \n";
	std::cin >> a;
	std::cout << "Podaj wysokosc trojkata \n";
>>>>>>> a3b3ebf92b0ba63999bdf2926dd1eb62a89f19b2
	std::cin >> h;
	std::cout << "pole trojkata wynosi: " << a / 2 * h;
}

void task3()
{
	//Napisz program, który poprosi u¿ytkownika o podanie promienia ko³a i obliczy pole tego ko³a, wyœwietlaj¹c wynik.
	float promien;
	double pi = 3.14;
	std::cout << "Podaj promien kola \n";
	std::cin >> promien;
	std::cout << pi * promien * promien;
}

void task4()
{
	//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy a, podstawy b i wysokoœci h trapezu, a nastêpnie obliczy pole tego trapezu, wyœwietlaj¹c wynik.
	short a, b, h;
	std::cout << "Podaj bok a \n";
	std::cin >> a;
	std::cout << "Podaj bok b \n";
	std::cin >> b;
	std::cout << "Podaj wysokosc h \n";
	std::cin >> h;
	std::cout << (a + b) * h / 2;
}

void task5()
{
	//Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci krawêdzi szeœcianu i obliczy jego objêtoœæ, wyœwietlaj¹c wynik.
	short a;
	std::cout << "Podaj krawedz a \n";
	std::cin >> a;
	std::cout << a * a * a;
}
void task6()
{
	//Napisz program, który poprosi u¿ytkownika o podanie temperatury w stopniach Celsiusza, a nastêpnie przeliczy j¹ na stopnie Fahrenheita i wyœwietli wynik.
	float c;
	std::cout << "Podaj temperature w stopniach celsjusza \n";
	std::cin >> c;
	std::cout << c * 2 + 30;
}

void task7()
{
	//Napisz program, który konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.
	float PLN;
	float EUR = 0.2264;
	std::cout << "Podaj kwote w pln \n";
	std::cin >> PLN;
	std::cout << PLN * EUR;
}

void task8()
{
	using namespace std;
	//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb(a, b) i obliczy œredni¹ arytmetyczn¹ tych liczb.Nastêpnie wyœwietli wynik.
	float a, b;
	cout << "Podaj a \n";
	cin >> a;
	cout << "Podaj b \n";
	cin >> b;
	cout << (a + b) / 2;
}

void task9()
{
	using namespace std;
	//Napisz program, który poprosi u¿ytkownika o podanie trzech liczb(a, b, c) i obliczy œredni¹ arytmetyczn¹ tych liczb.Nastêpnie wyœwietli wynik.
	float a, b, c;
	cout << "Podaj a \n";
	cin >> a;
	cout << "Podaj b \n";
	cin >> b;
	cout << "Podaj c \n";
	cin >> c;
	cout << (a + b + c) / 3;
}
void task10()
{
	//Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
	short a, b, c;
	std::cout << "Podaj a \n";
	std::cin >> a;
	std::cout << "Podaj b \n";
	std::cin >> b;
	std::cout << "Podaj c \n";
	std::cin >> c;
	std::cout << "srednia 3 wag: " << (a + (b * 2) + (c * 3)) / 3;
}
void task11()
{
	//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych.Nastêpnie wykona operacje(+, -, *, / ) i wyœwietli wyniki.
	short a, b;
	std::cout << "Podaj a \n";
	std::cin >> a;
	std::cout << "Podaj b \n";
	std::cin >> b;
	std::cout << "Wynik dodawania: " << a + b << "\n" << "Wynik odejmowania: " << a - b << "\n" << "Wynik mnozenia: " << a * b << "\n" << "Wynik dzielenia: " << a / b;

<<<<<<< HEAD
}
void task12()
{
	//Napisz program, który poprosi u¿ytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyœwietlaj¹c wynik.
	float s;
	std::cout << "ile sekund? \n";
	std::cin >> s;
	float m = s / 60, h = s / 3600;
	std::cout << "Sekund: " << s << "\n" << "Minut: " << m << "\n" << "Godzin: " << h;
}
void task13()
{
	//Napisz program, który poprosi u¿ytkownika o podanie wspó³rzêdnych(x1, y1) i(x2, y2) dwóch punktów w uk³adzie kartezjañskim, a nastêpnie obliczy odleg³oœæ miêdzy nimi, wyœwietlaj¹c wynik.
	float x1, y1, x2, y2;
	std::cout << "Podaj wspolzedna x1 \n";
	std::cin >> x1;
	std::cout << "Podaj wspolzedna y1 \n";
	std::cin >> y1;
	std::cout << "Podaj wspolzedna x2 \n";
	std::cin >> x2;
	std::cout << "Podaj wspolzedna y2 \n";
	std::cin >> y2;
	std::cout << "Odleglosc miedzy wspolzednymi wynosi: " << (x1 + y1) - (x2 + y2);
}
int main()
{
	setlocale(LC_CTYPE, "polish");
	//wiek();
	//zmianajednostek();
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
}
=======








int main() {
	setlocale(LC_CTYPE, "polish");
	//wiek();
	//metry();
	//pole();
	trojkat();
}


>>>>>>> a3b3ebf92b0ba63999bdf2926dd1eb62a89f19b2
/*

 Algorytm -  skoÃ±czony zbiÃ³r instrukcji realizujÂ¹cy postawione przed nim zadanie.
 KolejnoÅ“Ã¦ instrukcji w zbiorze jest okreÅ“lona
 Sposoby zapisu:

 - W punktach
 - Opis sÂ³owny
 - JÃªzyk programowania lub pseudokod
 - ZbiÃ³r rysunkÃ³w
 - Schemat blokowy

 Zmienna - jest to pewien obszar w pamieci, sluzacy do przechowywania danych. Te dane mozna modyfikowac.
 Zmienna pozwala przechowac tylko 1 wartosc w danym momencie czasu.

 Deklaracja zmiennej - moment jej utworzenia.

 typ_zmiennej nazwa_zmiennej;

 Typ zmiennej - mowi o wielkosci obszaru pamieci i o rodzaju przechowywanych danych np.     short, int/long, long long, float, double, long double.



 --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 short         liczby calkowite ze znakiem       2 bajty      <-32 768; 32 767>
 int/long      liczby calkowite ze znakiem       4 bajty      <-2 147 483 648; 2 147 483 647>
 long long     liczby calkowite ze znakiem       8 bajtow     <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

 --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------





  /\                                                   /\                                                        /\
 Jezeli przed powyzszymi typami dodamy slowo "unsigned" to zakres jest od zera do podwojonego zakresu gornego plus 1.




 --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

 float          liczby rzeczywiste ze znakiem       4 bajty
 double         liczby rzeczywiste ze znakiem       8 bajtow
 long double    liczby rzeczywiste ze znakiem       12 bajtow

 --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



 Nazwa zmiennej - nazwa obszaru w pamieci. Poprzez ta nazwe odwolujemy sie do tego obszaru.



 Wymagania kompilatora wzgledem nazwy:
 * uzycie tylko dozwolonych znakow
 - alfabet angielski a-z oraz A-Z
 -cyfry arabskie 0-9
 -podloga _
 * pierwszym znakiem nie moze byc cyfra
 * nie moze to byc slowo kluczowe danego jezyka programowania
 * musi byc unikalna w danej widocznosci



 Wymagania programistow:
 * jesli nazwa sklada sie z wielu wyrazow to zamiast spacji:
 - uzywamy znaku podkreslenia
 - stosujemy camel case, czyli piszemy wszystko razem a slowa (zaczynamy od drugiego)
 zaczynamy z duzej litery, np. firstNumberFromUser
 * nazwa zmiennej musi oddawac charakter przechowywanych danych, czyli miec znaczenie
 * nazwy po angielsku!! */
