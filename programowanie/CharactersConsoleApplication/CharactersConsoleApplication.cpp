#include <iostream>

using namespace std;

//Napisz program, kt�ry pobierze znak od u�ytkownika i wy�wietli go.
void task1()
{
    char characterFromUser;
    cout << "Podaj znak: \n";
    cin >> characterFromUser;

    cout << characterFromUser << endl;


    characterFromUser = 'a' + 2; // c

    cout << characterFromUser << endl;

}
// Napisz program, ktory wczyta od uzytkownika znak i sprawdzi, czy jest on z malej litery.
void task2()
{
    char characterFromUser;
    cout << "Podaj znak: \n";
    cin >> characterFromUser;

    if (characterFromUser >= 'a' && characterFromUser <= 'z') {
        cout << characterFromUser << " to mala litera alfabetu!";
    }
    else if (characterFromUser >= 'A' && characterFromUser <= 'Z') {
        cout << characterFromUser << " to duza litera alfabetu!";
    }
    else {
        cout << "Nieprawidlowy znak!";
    }
}
// Napisz program ktory poprosi cie o imie i cie przywita.
void task3()
{
    string username;
    cout << "Jak masz na imie? ";
    cin >> username;

    cout << "Witaj " << username << '!' << endl;
}
void task4()
{
    string password;
    cout << "Podaj haslo: ";
    cin >> password;

    if (password == "abc123") {
        cout << "Haslo poprawne!" << endl;
    }
    else {
        cout << "Haslo niepoprawne!" << endl;
        if ("ac" > "abn")
        {
            // abn pierwsze
        }
    }
}
//Napisz program, kt�ry wczyta �a�cuch znak�w i policzy ile jest ma�ych liter 'a'.
void task5()
{
    string text;
    cout << "Napisz cos: \n";
    cin >> text;

    int length = text.length();

    //cout << "Ostatni znak w tekscie: " << text[length - 1] << endl;

    int counter = 0;

    for (int i = 0; i < length; i++) {
        if (text[i] == 'a')
            counter++;
    }
    cout << "Ilosc liczb a: " << counter;
}
// Napisz program ktory bedzie prosil o haslo i nie przepusci dopoki nie bedzie ono prawidlowe
void task6()
{
    string password = "abc123";
    string userGuess;

    do {
        cout << "Podaj haslo: ";
        cin >> userGuess;
    } while (userGuess != password);
    cout << "Zgadles haslo!";
}
// Napisz program ktory pobiera od uzytkownika ciag znakow i wyswietla liczbe samoglosek i spolglosek
void task7()
{
    string userInput;
    cout << "Napisz cos: " << endl;
    cin >> userInput;

    int counter = 0;
    int counter2 = 0;

    int length = userInput.length();

    for (int letter = 0; letter <= length; letter++) {
        if (userInput[letter] == 'a' ||
            userInput[letter] == 'e' ||
            userInput[letter] == 'i' ||
            userInput[letter] == 'o' ||
            userInput[letter] == 'u' ||
            userInput[letter] == 'y') {
            counter++;
        }
        else {
            counter2++;
        }
    }
    cout << "Liczba samoglosek: " << counter;
    cout << "Liczba spolglosek: " << counter2;
}
// Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym.Nast�pnie skonwertuj t� liczb� na system dw�jkowy(binarny) i wy�wietl wynik.
void task8()
{
    int numberFromUser;
    cout << "Podaj liczbe: \n";
    cin >> numberFromUser;

    int tmpNumber = numberFromUser;
    string binaryNumber = "";

    do {
        int rest = tmpNumber % 2;
        tmpNumber = tmpNumber / 2;

        if (rest == 0)
            binaryNumber = "0" + binaryNumber;
        else
            binaryNumber = "1" + binaryNumber;

    } while (tmpNumber != 0);

    cout << "Liczba " << numberFromUser << " binarnie to " << binaryNumber << '\n';
}
// Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
void task9()
{
    string wordFromUser;
    cout << "Podaj wyraz: \n";
    cin >> wordFromUser;

    bool isPalindrome = true;

    for (int fromStart = 0, fromEnd = wordFromUser.length() - 1; fromStart < fromEnd; fromStart++, fromEnd--) {
        if (wordFromUser[fromStart] != wordFromUser[fromEnd]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
        cout << "Wyraz jest palindromem \n";
    else
        cout << "Wyraz nie jest palindromem \n";
}
// Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
void task10() {}
// Program wyci�gaj�cy informacje z numeru PESEL
void task11() {
}
// Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).
void task12() {}

int main()
{
   /* task1();*/
   /* task2();*/
   /* task3();*/
   /* task4();*/
   /* task5();*/
   /* task6();*/
   /* task7();*/
   /* task8();*/
   /* task9();*/
   /* task10();*/
}