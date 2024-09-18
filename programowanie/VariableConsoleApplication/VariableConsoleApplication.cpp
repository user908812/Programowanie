#include <iostream>

using namespace std;

void wiek() 
{
	// napisz program, ktory wczyta od uzytkownika jego wiek a nastepnie wyswietli go na konsoli
	short wiek;
	cout << "Podaj swoj wiek." << endl;
	cin >> wiek;
	cout << "masz " << wiek << " lat." << endl;
}
void zmianajednostek()
{
	float m;
	cout << "Podaj dlugosc w metrach" << endl;
	cin >> m;

	float cm = m * 100;
	float mm = cm * 10;
	float km = m / 1000;

	cout << "Metry: " << m << endl;
	cout << "Centymetry: " << cm << endl;
	cout << "Milimetry: " << mm << endl;
	cout << "Kilometry: " << km << endl;
}

void task1()
{
	//Napisz program, ktory poprosi uzytkownika o podanie dlugosci boku a i b prostokata, a nastepnie obliczy i wyswietli pole prostokata.
	float bok1, bok2;	
	cout << "Podaj bok a" << endl;
	cin >> bok1;
	cout << "Podaj bok b" << endl;
	cin >> bok2;
	cout << "Pole prostokata wynosi: " << bok1 * bok2;
}
void task2()
{
	//napisz program, który poprosi u¿ytkownika o podanie d³ugoœci podstawy i wysokoœci trójk¹ta, a nastêpnie obliczy pole tego trójk¹ta, wyœwietlaj¹c wynik.
	float a, h;
	cout << "podaj dlugosc podstawy trojkata";
	cin >> a;
	cout << "podaj wysokosc trojkata";
}
void trojkat()
{
	//Napisz program, ktory poprosi uzytkownika o podanie dlugosci podstawy i wysokosci trojkata, a nastepnie obliczy pole tego trojkata, wyswietlajac wynik.
	float a, h;
	cout << "Podaj dlugosc podstawy trojkata" << endl;
	cin >> a;
	cout << "Podaj wysokosc trojkata" << endl;
	cin >> h;
	int result = a / 2 * h;

	cout << "pole trojkata wynosi: " << result;
}
void task3()
{
	//Napisz program, ktory poprosi uzytkownika o podanie promienia kola i obliczy pole tego kola, wyswietlajac wynik.
	float promien;
	double pi = 3.14;
	cout << "Podaj promien kola" << endl;
	cin >> promien;
	cout << "Pole kola wynosi: " << pi * promien * promien;
}
void task4()
{
	//Napisz program, ktory poprosi uzytkownika o podanie dlugosci podstawy a, podstawy b i wysokosci h trapezu, a nastepnie obliczy pole tego trapezu, wyswietlajac wynik.
	short a, b, h;
	cout << "Podaj bok a" << endl;
	cin >> a;
	cout << "Podaj bok b" << endl;
	cin >> b;
	cout << "Podaj wysokosc h" << endl;
	cin >> h;
	cout << "Pole trapezu wynosi: " << (a + b) * h / 2;
}
void task5()
{
	//Napisz program, ktory poprosi uzytkownika o podanie d³ugoœci krawêdzi szeœcianu i obliczy jego objêtoœæ, wyœwietlaj¹c wynik.
	short a;
	cout << "Podaj krawedz a" << endl;
	cin >> a;
	int result = a * a * a;
	cout << result;
}
void task6()
{
	//Napisz program, ktory poprosi uzytkownika o podanie temperatury w stopniach Celsiusza, a nastepnie przeliczy ja na stopnie Fahrenheita i wyswietli wynik.
	float c;
	cout << "Podaj temperature w stopniach celsjusza \n";
	cin >> c;
	cout << c * 2 + 30;
}
void task7()
{
	//Napisz program, ktory konwertuje wprowadzon¹ kwotê w jednej walucie na inn¹, korzystaj¹c z okreœlonego kursu wymiany.
	float PLN;
	float EUR = 0.2264;
	cout << "Podaj kwote w pln \n";
	cin >> PLN;
	cout << PLN * EUR;
}
void task8()
{
	//Napisz program, ktory poprosi uzytkownika o podanie dwóch liczb(a, b) i obliczy œredni¹ arytmetyczn¹ tych liczb.Nastêpnie wyswietli wynik.
	float a, b;
	cout << "Podaj a \n";
	cin >> a;
	cout << "Podaj b \n";
	cin >> b;
	cout << (a + b) / 2;
}
void task9()
{
	//Napisz program, ktory poprosi uzytkownika o podanie trzech liczb(a, b, c) i obliczy œredni¹ arytmetyczn¹ tych liczb.Nastêpnie wyswietli wynik.
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
	cout << "Podaj a \n";
	cin >> a;
	cout << "Podaj b \n";
	cin >> b;
	cout << "Podaj c \n";
	cin >> c;
	cout << "srednia 3 wag: " << (a + (b * 2) + (c * 3)) / 3;
}
void task11()
{
	//Napisz program, ktory poprosi uzytkownika o podanie dwóch liczb ca³kowitych.Nastêpnie wykona operacje(+, -, *, / ) i wyswietli wyniki.
	short a, b;
	cout << "Podaj a \n";
	cin >> a;
	cout << "Podaj b \n";
	cin >> b;
	cout << "Wynik dodawania: " << a + b << "\n" << "Wynik odejmowania: " << a - b << "\n" << "Wynik mnozenia: " << a * b << "\n" << "Wynik dzielenia: " << a / b;
}
void task12()
{
	//Napisz program, ktory poprosi uzytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyswietlajac wynik.
	float s;
	cout << "ile sekund? \n";
	cin >> s;
	float m = s / 60, h = s / 3600;
	cout << "Sekund: " << s << "\n" << "Minut: " << m << "\n" << "Godzin: " << h;
}
void task13()
{
	//Napisz program, ktory poprosi uzytkownika o podanie wspó³rzêdnych(x1, y1) i(x2, y2) dwoch punktow w ukladzie kartezjanskim, a nastepnie obliczy odleglosc miedzy nimi, wyswietlajac wynik.
	float x1, y1, x2, y2;
	cout << "Podaj wspolzedna x1 \n";
	cin >> x1;
	cout << "Podaj wspolzedna y1 \n";
	cin >> y1;
	cout << "Podaj wspolzedna x2 \n";
	cin >> x2;
	cout << "Podaj wspolzedna y2 \n";
	cin >> y2;
	cout << "Odleglosc miedzy wspolzednymi wynosi: " << (x1 + y1) - (x2 + y2);
}
int main() {
	setlocale(LC_CTYPE, "polish");
	trojkat();
}
/*

 Algorytm -  skonczony zbior instrukcji realizujacy postawione przed nim zadanie.
 Kolejnosc instrukcji w zbiorze jest okreslona
 Sposoby zapisu:

 - W punktach
 - Opis slowny
 - Jezyk programowania lub pseudokod
 - Zbior rysunkow
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
 - pierwszym znakiem nie moze byc cyfra
 - nie moze to byc slowo kluczowe danego jezyka programowania
 - musi byc unikalna w danej widocznosci



 Wymagania programistow:
 * jesli nazwa sklada sie z wielu wyrazow to zamiast spacji:
 - uzywamy znaku podkreslenia
 - stosujemy camel case, czyli piszemy wszystko razem a slowa (zaczynamy od drugiego)
 zaczynamy z duzej litery, np. firstNumberFromUser
 - nazwa zmiennej musi oddawac charakter przechowywanych danych, czyli miec znaczenie
 - nazwy po angielsku!! 
  
 */
