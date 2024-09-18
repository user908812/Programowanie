#include <iostream>
using namespace std;

// Napisz program ktory pobierze wspolrzedne 2D i obliczy jak daleko jest ten punkt od srodka uk. wspolrzednych
void task1() {
	const bool rounded = false;
	double x, y;
	cout << "Podaj pozycje X: " << endl;
	cin >> x;
	cout << "Podaj pozycje Y: " << endl;
	cin >> y;

	const double result = sqrt(x * x + y * y);

	if (rounded) {
		cout << "Odleglosc od srodka wynosi " << round(result) << endl;
	} else {
		cout << "Odleglosc od srodka wynosi " << result << endl;
	}
}

//void test(char op, int n1, int n2) {
//	switch (op) {
//		case '+':
//			cout << "Wynik to " << n1 + n2;
//			break;
//		case '-':
//			cout << "Wynik to " << n1 - n2;
//			break;
//		case '*':
//			cout << "Wynik to " << n1 * n2;
//			break;
//		case '/':
//			cout << "Wynik to " << n1 / n2;
//			break;
//		default:
//			break;
//	}
//}