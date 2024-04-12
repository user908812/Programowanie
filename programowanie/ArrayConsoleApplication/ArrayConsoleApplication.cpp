#include <iostream>

using namespace std;

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
int main()
{
    task1();
}