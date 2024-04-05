#include <iostream>

using namespace std;

//Napisz program, który pobierze znak od u¿ytkownika i wyœwietli go.
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
// program sprawdzajacy czy haslo jest poprawne
// np. jesli haslo jest 'abc123'
// program ma wyswietlic 'haslo poprawne'
// jesli jest inne, wyswietli 'haslo niepoprawne'
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
//Napisz program, który wczyta ³añcuch znaków i policzy ile jest ma³ych liter 'a'.
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
int main()
{
   /* task1();*/
   /* task2();*/
   /* task3();*/
   /* task4();*/
   /* task5();*/
   /* task6();*/
    task7();
}