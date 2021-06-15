#pragma once
#include <string>
#include "Shape.h"
using namespace std;

class Sphere: public Shape
{
private:
	double radius;
public:
	Sphere();
	Sphere(double, string);
	void setRadius(double);
	double getRadius();
	double getVolume();

	string toString();
};

