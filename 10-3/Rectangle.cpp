#include "Rectangle.h"

int Rectangle::numOfRect=0;

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

double Rectangle::getHeight() const
{
    return height;
}

double Rectangle::getArea() const
{
    return height*width;
}

Rectangle::Rectangle()
{
    numOfRect++;
}

int Rectangle::getNumOfRect()
{
    return numOfRect;
}

