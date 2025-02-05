#include <iostream>
#include "Square.h"

using namespace std;

class Square {

private:
    double sideA, sideB;

    public:

        Square(double a, double b) {
            a = sideA;
            b = sideB;
        }

        double pole() {
            return sideA * sideB;
        }
        double obwod() {
            return 2 * sideA + 2 * sideB;
        }
        void informacjeOFigurze() {
            cout << "Bok a: " << sideA << "\n Bok b: " << sideB;
            cout << "\nPole: " << pole() << "\n Obwod: " << obwod() << '\n';
        }
};

int main()
{
    Square prostokat(5, 6);
    prostokat.pole();
    prostokat.obwod();
    prostokat.informacjeOFigurze();
}