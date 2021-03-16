#ifndef Rectangle_h
#define Rectangle_h
#include <iostream>

class Rectangle
{
public:
	double width, height;

	Rectangle();

	Rectangle(double newWidth, double newHeight);

	double getArea();
	double getPerimeter();
};
#endif
