#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;
    static int numOfRect;
public:
    Rectangle();
    void setWidth(double);
    double getWidth() const;
    void setHeight(double);
    double getHeight() const;
    static int getNumOfRect();

    double getArea() const;

};


#endif //INC_10_2_RECTANGLE_H
