#include <iostream>

using namespace std;

// Napisz program, ktory wczyta np. 5 liczb
// a nastepnie wyswietli je w odwrotnej kolejnosci.
void task1()
{
    /*
    int num0, num1, num2, num3;

    cout << "Podaj 1 liczbe: " << endl;
    cin >> num0;
    cout << "Podaj 2 liczbe: " << endl;
    cin >> num1;
    cout << "Podaj 3 liczbe: " << endl;
    cin >> num2;
    cout << "Podaj 4 liczbe: " << endl;
    cin >> num3;
    */

    const unsigned int ARRAY_NUMBER_SIZE = 10; // sta³a nieujemna
    int numbers[ARRAY_NUMBER_SIZE];

    for (int n = 0; n < ARRAY_NUMBER_SIZE; n++) {
        cout << "Podaj " << (n + 1) << " liczbe" << endl;
        cin >> numbers[n];
    }
    for (int i = ARRAY_NUMBER_SIZE - 1; i >= 0; i--) {
        cout << numbers[i] << ", ";
    }
    cout << endl;
}
// Napisz program obliczajacy srednia arytmetyczna elementow w tablicy liczb calkowitych.
void task2()
{
    const unsigned int ARRAY_SIZE = 5;
    int numbers[ARRAY_SIZE];

    srand(time(0));
    cout << "Liczby w kolekcji: " << endl;

    for (int n = 0; n < ARRAY_SIZE; n++) 
    {
        numbers[n] = rand() % 11; // <-- liczby od 0 do 10
        cout << numbers[n] << ", ";
    }
    cout << "\n\n";

    int sum = numbers[0];
    for (int n = 0; n < ARRAY_SIZE; n++)
    {
        sum = sum + numbers[n];
    }
    double average = sum * 1.0 / ARRAY_SIZE;

    cout << "Suma wynosi " << sum;
    cout << "Srednia wynosi " << average;
}
// Napisz program ktory uzupelni tablice
// losowymi liczbami i znajdzie minimum i maximum
void task3()
{
    const unsigned int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];

    srand(time(0));
    cout << "Liczby w kolekcji: " << endl;

    for (int n = 0; n < ARRAY_SIZE; n++)
    {
        numbers[n] = rand() % 11;
        cout << numbers[n] << ", ";
    }
    cout << "\n\n";

    int maxNumber = numbers[0];

    for (int n = 0; n < ARRAY_SIZE; n++)
    {
        if (numbers[n] > maxNumber)
            maxNumber = numbers[n];
    }
    cout << "Najwieksza liczba to " << maxNumber << endl;
    
    int minNumber = numbers[0];

    for (int n = 0; n < ARRAY_SIZE; n++)
    {
        if (numbers[n] < minNumber)
            minNumber = numbers[n];
    }
    cout << "Najmniejsza liczba to " << minNumber << endl;
}
// Napisz program ktory wyswietli number dnia tygodnia
// a nastepnie wyswietli jego nazwe lub komunikat bledu
void task4()
{
    int day; 
    string NONE = "", Monday = "Poniedzialek", Tuesday = "Wtorek", Wednesday = "Sroda", Thursday = "Czwartek", Friday = "Piatek", Saturday = "Sobota", Sunday = "Niedziela";

    cout << "Podaj numer dnia tygodnia: ";
    cin >> day;

    string days[8] = {NONE, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    if (day >= 1 && day <= 7) {
        cout << "Nazwa dnia to " << days[day] << endl;
    } else {
        cout << "Nieprawidlowy dzien tygodnia" << endl;
    }
}
/*
Sortowanie przez wybor - powtarzamy dla kazdego elementu w kolekcji od lewej do prawej oprocz ostatniego, warunek i zamieniamy miejscami 2 pozycje. Powtarzamy.
*/

// 
void task5() 
{
    const unsigned int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];

    srand(time(NULL));
    cout << "Liczby w kolekcji: \n";

    for (int n = 0; n < ARRAY_SIZE; n++)
    {
        numbers[n] = rand() % 11;
        cout << numbers[n] << ", ";
    }
    cout << "\n\n";
    
    // Algorytm sortujacy

    for (int n = 0; n <= ARRAY_SIZE - 2; n++) 
    {
        int minIndex = n;
        for (int i = n + 1; i < ARRAY_SIZE; i++) 
        {
            if (numbers[i] < numbers[minIndex])
                minIndex = i;
        }
        int tmp = numbers[n];
        numbers[n] = numbers[minIndex];
        numbers[minIndex] = tmp;
    }

    cout << "Po sortowaniu: \n";
    for (int n = 0; n < ARRAY_SIZE; n++) 
    {
        cout << numbers[n] << ", ";
    }
    cout << "\n\n";
}
/*

    Sortowanie przez wybor - przechodzi przez tablice, znajduje najmniejszy element i umieszcza go na poczatku tablicy (i to sie powtarza przechodzac tylko raz)

    Sortowanie babelkowe - porownuje sasiednie elementy i zamienia je, jesli sa w zlej kolejnosci (przechodzac kilka razy przez tablice) do momentu az zostanie posortowana

*/
void task6() 
{
    system("color 4F");
    const unsigned int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];

    srand(time(NULL));
    cout << "Liczby w kolekcji: \n";

    for (int n = 0; n < ARRAY_SIZE; n++)
    {
        numbers[n] = rand() % 11;
        cout << numbers[n] << ", ";
    }
    cout << "\n\n";
    
    // Algorytm sortujacy

    for (int n = 0; n < ARRAY_SIZE - 1; n++) 
    {
        int minIndex = n;
        for (int i = 0; i < ARRAY_SIZE; i++) 
        {
            if (numbers[i] < numbers[i + 1])
            {
                int tmp = numbers[n];
                numbers[n] = numbers[minIndex];
                numbers[minIndex] = tmp;
            }
        }
    }

    cout << "Po sortowaniu: \n";
    for (int n = 0; n < ARRAY_SIZE; n++) 
    {
        cout << numbers[n] << ", ";
    }
    cout << "\n\n";
}
void openVSCode(bool shouldOpen) {

    if (shouldOpen) {
        cout << "Trwa otwieranie visual studio code..." << endl;
        system("code .");
    } else {
        cout << "Brak pozwolenia na otworzenie VSCode!" << endl;
    }
}
int main() {
    openVSCode(false);
    /*task6();*/ 
}