#include <iostream>

using namespace std;

//Napisz program, który pobierze znak od u¿ytkownika i wyœwietli go.
void task1()
{
    char characterFromUser;
    cout << "Podaj znak: ";
    cin >> characterFromUser;

    cout << characterFromUser << endl; // jesli a / 1


    characterFromUser = 'a' + 2; // c


    cout << characterFromUser << endl; // to b / 2

}
int main()
{
    task1();
}