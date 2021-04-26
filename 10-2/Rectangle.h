#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle();
    void setWidth(double);
    double getWidth();
    void setHeight(double);
    double getHeight();

    double getArea();

};


#endif //INC_10_2_RECTANGLE_H
