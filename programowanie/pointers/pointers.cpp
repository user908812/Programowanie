#include <iostream>

using namespace std;

int main()
{
    int firstVar = 5;
    int secondVar = 9;
    bool thirdVar = true;

    cout << "firstVar: " << firstVar << '\n';
    cout << "firstVar address: " << &firstVar << '\n';
    cout << "secondVar: " << secondVar << '\n';
    cout << "secondVar address: " << &secondVar << '\n';

    int *ptr = &firstVar;
    cout << "ptr: " << ptr << '\n';
    *ptr = 69;
    cout << "firstVar: " << firstVar << '\n';

    bool* boolPtr;
    boolPtr = &thirdVar;
}