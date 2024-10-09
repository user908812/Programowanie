#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string name;
    int unsigned age;

    cout << "Podaj imie\n";
    cin >> name;
    cout << "Podaj wiek\n";
    cin >> age;

    ofstream writeInFile;

    writeInFile.open("c:\\pierwszyPlik.txt");

    if (writeInFile.is_open()) {
        writeInFile << "Imie: " << name << "\nWiek: " << age;
    }

    writeInFile.close();
}