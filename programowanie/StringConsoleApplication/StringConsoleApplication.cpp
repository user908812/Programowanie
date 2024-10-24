#include <iostream>

using namespace std;
using function = void;

function text() {
	string text = "Ala ma kota";
	size_t len = text.length();
	cout << "Dlugosc tekstu: " << len << "\n";

	string subString = text.substr(4, 2); // na indexie 4, 2 znaki do wyciecia
	cout << "Podlancuch: " << subString << "\n";

	text.replace(0, 3, "Ola"); // index startowy, 3 znaki do wyciecia, tekst do zastapienia
	cout << "Replace: " << text << "\n";

	text.insert(3, " moze"); // dodaje po 3 indexie
	cout << "Insert: " << text << "\n";
}

int main()
{
	system("color 0A");
	text();
}