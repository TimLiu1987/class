#include "Cuboid.h"

Cuboid::Cuboid()
{
}

Cuboid::Cuboid(double l, double w, double h, string c)
{
	length = l;
	width = w;
	height = h;
	setColor(c);
}

void Cuboid::setLength(double l)
{
	length = l;
}

void Cuboid::setWidth(double w)
{
	width = w;
}

void Cuboid::setHeight(double h)
{
	height = h;
}

double Cuboid::getLength()
{
	return length;
}

double Cuboid::getWidth()
{
	return width;
}

double Cuboid::getHeight()
{
	return height;
}

double Cuboid::getVolume()
{
	return getLength() * getWidth() * getHeight();
}

string Cuboid::toString()
{
	return "Cuboid";
}
