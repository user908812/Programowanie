#include <iostream>
#include <fstream>

using namespace std;

void task1() {
    string name;
    int unsigned age;

    cout << "Podaj imie\n";
    cin >> name;
    cout << "Podaj wiek\n";
    cin >> age;

    ofstream writeInFile;

    writeInFile.open("c:\\Olek 2D\\pierwszyPlik.txt", ios::app); // ios::app (przeciwienstwo nadpisywania pliku)

    if (writeInFile.is_open()) {
        writeInFile << name;
        writeInFile << "\n";
        writeInFile.flush();  // Wymuszenie wypchniecia danych
        writeInFile << age << "\n";

        writeInFile.close();
    } else cout << "Blad w wczytywaniu pliku lub w sciezce!";
}

void task2() {
    string name;
    int unsigned age;
    ifstream readFromFile;

    readFromFile.open("c:\\Olek 2D\\pierwszyPlik.txt");

    if (readFromFile.is_open()) {

        while (!readFromFile.eof()) { // EndOfFile
            readFromFile >> name;
            readFromFile >> age;

            cout << "Imie: " << name << ", Wiek: " << age << endl;
        }
        readFromFile.close();
    }
}

int main()
{
    task2();
}