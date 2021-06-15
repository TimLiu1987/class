#pragma once
#include "Shape.h"

class Cuboid:public Shape
{
private:
	double length;
	double width;
	double height;

public:
	Cuboid();
	Cuboid(double, double, double, string);
	void setLength(double);
	void setWidth(double);
	void setHeight(double);
	double getLength();
	double getWidth();
	double getHeight();
	double getVolume();

	string toString();
};

