//
// Created by tim on 2021/3/30.
//

#include "Rectangle.h"

void Rectangle::setWidth(double width) {
    width = width;
}

double Rectangle::getWidth() {
    return width;
}

void Rectangle::setHeight(double height) {
    height= height;
}

double Rectangle::getHeight() {
    return height;
}

double Rectangle::getArea() {
    return width*height;
}

Rectangle::Rectangle() {

}


Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;
}
