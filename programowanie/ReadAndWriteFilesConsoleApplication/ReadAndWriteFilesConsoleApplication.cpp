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

    writeInFile.open("c:\\Olek 2D\\pierwszyPlik.txt", ios::app); // ios::app (przeciwienstwo nadpisywania pliku)

    if (writeInFile.is_open()) {
        writeInFile << "\nImie: " << name << "\nWiek: " << age << endl;
        writeInFile.flush();  // Wymuszenie wypchniecia danych
        writeInFile << "------";

        writeInFile.close();
    } else {
        cout << "Blad w wczytywaniu pliku lub w sciezce!";
    }
}