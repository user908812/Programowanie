#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>

using namespace std;

const string PATH_LICZBY = "C:/Users/olekr_srn5naa/source/repos/Programowanie/programowanie/Matura2022Czerwiec/liczby.txt";
const string PATH_WYNIKI = "C:/Users/olekr_srn5naa/source/repos/Programowanie/programowanie/Matura2022Czerwiec/wyniki4.txt";
const string PATH_WYNIKI6 = "C:/Users/olekr_srn5naa/source/repos/Programowanie/programowanie/Matura2022Czerwiec/wyniki6.txt";
const string PATH_MECZE = "C:/Users/olekr_srn5naa/source/repos/Programowanie/programowanie/Matura2022Czerwiec/mecze.txt";

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= std::sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

void zad4_1() {
    ifstream inputFile(PATH_LICZBY);
    ofstream outputFile(PATH_WYNIKI);

    !inputFile.is_open() && cerr << "Nie mozna otworzyc pliku liczby.txt!" << endl;
    !outputFile.is_open() && cerr << "Nie mozna otworzyc pliku wyniki4.txt!" << endl;

    int number;

    vector<int> numbers;
    while (inputFile >> number) {
        numbers.push_back(number);
    }

    for (int num : numbers) {
        int reversed = reverseNumber(num);

        if (reversed % 17 == 0) {
            outputFile << reversed << endl;
        }
    }

    inputFile.close();
    outputFile.close();
}

void zad4_2() {
    ifstream inputFile(PATH_LICZBY);
    ofstream outputFile(PATH_WYNIKI);

    !inputFile.is_open() && cerr << "Nie mozna otworzyc pliku liczby.txt!" << endl;
    !outputFile.is_open() && cerr << "Nie mozna otworzyc pliku wyniki4.txt!" << endl;

    int number;

    int maxDiff = -1;
    int maxNum = 0;
    int maxRev = 0;

    while (inputFile >> number) {
        int reversed = reverseNumber(number);

        int diff = abs(number - reversed);

        if (diff > maxDiff) {
            maxDiff = diff;
            maxNum = number;
            maxRev = reversed;
        }
    }

    outputFile << maxNum << " " << maxDiff << endl;

    inputFile.close();
    outputFile.close();
}

void zad4_3() {
    ifstream inputFile(PATH_LICZBY);
    ofstream outputFile(PATH_WYNIKI);

    !inputFile.is_open() && cerr << "Nie mozna otworzyc pliku liczby.txt!" << endl;
    !outputFile.is_open() && cerr << "Nie mozna otworzyc pliku wyniki4.txt!" << endl;

    int number;

    while (inputFile >> number) {
        if (isPrime(number)) {
            int reversed = reverseNumber(number);
            if (isPrime(reversed)) {
                outputFile << number << endl;
            }
        }
    }

    inputFile.close();
    outputFile.close();
}

void zad4_4() {
    ifstream inputFile(PATH_LICZBY);
    ofstream outputFile(PATH_WYNIKI);

    !inputFile.is_open() && cerr << "Nie mozna otworzyc pliku liczby.txt!" << endl;
    !outputFile.is_open() && cerr << "Nie mozna otworzyc pliku wyniki4.txt!" << endl;

    int number;

    map<int, int> numberCount;

    while (inputFile >> number) {
        numberCount[number]++;
    }

    int differentCount = 0;
    int twoCount = 0;
    int threeCount = 0;

    for (const auto& pair : numberCount) {
        if (pair.second == 1) {
            differentCount++;
        }
        else if (pair.second == 2) {
            twoCount++;
        }
        else if (pair.second == 3) {
            threeCount++;
        }
    }

    outputFile << differentCount << " " << twoCount << " " << threeCount << endl;

    inputFile.close();
    outputFile.close();
}

struct Mecz {
    int id_meczu;
    string data;
    int id_klubu;
    int sety_wygrane;
    int sety_przegrane;
    int id_sedziego;
};

void zad6_1() {
    ifstream plik(PATH_MECZE);

    if (!plik.is_open()) {
        cerr << "Nie udalo sie otworzyc pliku." << endl;
        return;
    }

    string linia;
    int liczba_meczow_tie_break = 0;

    plik >> linia;

    while (plik) {
        Mecz m;
        char separator;

        plik >> m.id_meczu >> separator;
        plik >> m.data >> separator;
        plik >> m.id_klubu >> separator;
        plik >> m.sety_wygrane >> separator;
        plik >> m.sety_przegrane >> separator;
        plik >> m.id_sedziego;

        if ((m.sety_wygrane == 3 && m.sety_przegrane == 2) || (m.sety_wygrane == 2 && m.sety_przegrane == 3)) {
            liczba_meczow_tie_break++;
        }

        plik.ignore();
    }

    plik.close();

    ofstream wynik(PATH_WYNIKI6, ios::app);
    if (wynik.is_open()) {
        wynik << "6.1 " << liczba_meczow_tie_break << endl;
        wynik.close();
    }
    else {
        cerr << "Nie udalo sie zapisac do pliku wyniki6.txt" << endl;
    }
}

int main() {
    //zad4_1();
    //zad4_2();
    //zad4_3();
    zad4_4();
	zad6_1();

    return 0;
}
