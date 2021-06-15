#include "Shape.h"

Shape::Shape()
{
}

Shape::Shape(string c)
{
	color = c;
}

void Shape::setColor(string c)
{
	color = c;
}

string Shape::getColor()
{
	return color;
}
