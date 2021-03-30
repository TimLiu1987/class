
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

};


#endif //INC_11_1_RECTANGLE_H
