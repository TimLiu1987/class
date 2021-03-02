#include<iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main() {
	double x, y, a, b;
	cin >> x >> y >> a >> b;
	Rectangle rectangle1(x,y);
	Rectangle rectangle2(a,b);

	cout <<setprecision(2) << fixed << rectangle1.getArea() << " " << rectangle1.getPerimeter() << endl;
	// Modify circle radius
	cout << setprecision(2) << fixed << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;

	rectangle2.setHeight(5.0);
	rectangle2.setWidth(2.5);

	cout << setprecision(2) << fixed << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;

	return 0;
}
