#include <iostream>
using namespace std;

struct point {
	double x;
	double y;
};

static void getCoordinate(point p) {
	cout << "Podaj x: " << endl;
	cin >> p.x;
	cout << "Podaj y: " << endl;
	cin >> p.y;
}

void task2()
{
	const bool rounded = false;
	point firstPoint;
	firstPoint.x = 7;
	firstPoint.y = 0;

	getCoordinate(firstPoint);

	const double result = sqrt(firstPoint.x * firstPoint.x + firstPoint.y * firstPoint.y);

	if (rounded) {
		cout << "Odleglosc od srodka wynosi " << round(result) << endl;
	} else {
		cout << "Odleglosc od srodka wynosi " << result << endl;
	}
}