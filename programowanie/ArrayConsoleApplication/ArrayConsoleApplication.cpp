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
    cout << "Podaj numer dnia tygodnia: ";
    cin >> day;

    string dayName[7] = {"Poniedzialek", "Wtorek", "Sroda"};
    dayName[0] = "Poniedzialek";
    dayName[1] = "Wtorek";
    dayName[2] = "Sroda";
    dayName[3] = "Czwartek";
    dayName[4] = "Piatek";
    dayName[5] = "Sobota";
    dayName[6] = "Niedziela";

    if (day <= 0 && day >= 6) {
        cout << "Nazwa dnia to " << dayName[day] << endl;
    } else {
        cout << "Nieprawidlowy dzien tygodnia!";
    }
        
}
int main()
{
 // task1();
//  task2();
//  task3();
    task4();
}