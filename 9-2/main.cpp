#include "Rectangle.h"
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	double x, y, a, b;
	cin >> x >> y >> a >> b;
	Rectangle rectangle1(x,y);
	Rectangle rectangle2(a,b);

	cout <<setprecision(2) << fixed << rectangle1.getArea() << " " << rectangle1.getPerimeter() << endl;
	// Modify circle radius
	cout << setprecision(2) << fixed << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;

	rectangle2.height = 5.0;
	rectangle2.width = 2.5;

	cout << setprecision(2) << fixed << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;

	return 0;
}
