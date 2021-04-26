#include "Rectangle.h"

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

double Rectangle::getWidth()
{
    return width;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

double Rectangle::getHeight()
{
    return height;
}

double Rectangle::getArea()
{
    return height*width;
}

Rectangle::Rectangle()
{

}
