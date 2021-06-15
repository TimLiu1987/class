#include "Sphere.h"

Sphere::Sphere()
{
}

Sphere::Sphere(double r, string c)
{
	radius = r;
	setColor(c);
}

void Sphere::setRadius(double r)
{
	radius = r;
}

double Sphere::getRadius()
{
	return radius;
}

double Sphere::getVolume()
{
	return 4.0 / 3.0 * 3.14159 * getRadius() * getRadius() * getRadius();
}

string Sphere::toString()
{
	return "Sphere";
}
