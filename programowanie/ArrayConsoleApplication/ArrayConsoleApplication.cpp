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
        numbers[n] = rand() % 11; // <-- liczby od 0 do 100
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
int main()
{
 // task1();
  task2();
}