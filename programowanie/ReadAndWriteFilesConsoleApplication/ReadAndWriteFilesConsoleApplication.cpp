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

// Napisz program ktory wygeneruje losowa ilosc liczb losowych i zapisze je do pliku tekstowego.
void task3() {

    srand(time(NULL));
    int randomNumberCount = rand() % 100;

    ofstream file;
    file.open("c:\\Olek 2D\\liczby.txt", ios::app);

    for (int i = 0; i < randomNumberCount; i++)
    {
        if (file.is_open()) {
            file << rand() % 100 << "\n";
            file.flush();
        } else cout << "Blad w odczytywaniu pliku.";
    }
    file.close();
}
void task4() {
    string name;
    int unsigned biggestNumber;
    ifstream readFromFile;

    readFromFile.open("c:\\Olek 2D\\liczby.txt");

    if (readFromFile.is_open()) {
        int max = 0;
        int numberFromFile;
        
        while (readFromFile >> numberFromFile) {
            if (numberFromFile > max) 
                max = numberFromFile;
        }

        readFromFile.close();
        cout << "Najwieksza liczba to " << max << "\n";
    }
}

int main() {
    task4();
}