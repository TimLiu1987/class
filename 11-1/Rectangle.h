
#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle {

private:
    double width;
    double height;

public:
    Rectangle();
    Rectangle(double ,double );
    void setWidth(double );
    double getWidth();
    void setHeight(double );
    double getHeight();
    double getArea();
    void swapByReference(Rectangle &r2);
    void swapByPointer(Rectangle *r2);

};


#endif //INC_11_1_RECTANGLE_H
