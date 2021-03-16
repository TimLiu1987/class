#ifndef Rectangle_h
#define Rectangle_h
#include <iostream>

class Rectangle
{
public:

	Rectangle();

	Rectangle(double newWidth, double newHeight);
	
	void setWidth(double);
	void setHeight(double);

	double getArea();
	double getPerimeter();
private:
	double width, height;
};
#endif
