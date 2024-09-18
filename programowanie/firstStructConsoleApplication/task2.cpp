#include <iostream>
using namespace std;

static void getCoordinate(double& x, double& y) {
	cout << "Podaj x: " << endl;
	cin >> x;
	cout << "Podaj y: " << endl;
	cin >> y;
}

struct let {
	long double x;
	long double y;
};

void task2() {
	const bool rounded = false;
	let firstPoint;
	//let secondPoint;
	
	firstPoint.x = 5;
	//getCoordinate(x, y);

	//const double result = sqrt(x * x + y * y);

	if (rounded) {
		cout << "Odleglosc od srodka wynosi " << round(result) << endl;
	} else {
		cout << "Odleglosc od srodka wynosi " << result << endl;
	}
}