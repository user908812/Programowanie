#pragma once

#include <iostream>
using namespace std;

class Square {

private:
    double sideA;

public:

    Square(double a);
    void ShowInfo();
    double GetPerimeter();
    double GetArea();
};