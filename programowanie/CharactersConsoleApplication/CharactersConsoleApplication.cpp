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

}
int main()
{
   /* task1();*/
   /* task2();*/
   /* task3();*/
    task4();
}