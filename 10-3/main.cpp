#include <iostream>
#include "Rectangle.h"
using namespace std;

int sum(Rectangle rectArray[], int size)
{
    double tot=0;

    for(int i=0;i<size;i++)
    {
        tot+=rectArray[i].getArea();
    }

    return tot;
}


int main()
{
    Rectangle array[3];

    for(int i=0;i<3;i++)
    {
        double width,height;
        cin >> width >> height;

        array[i].setWidth(width);
        array[i].setHeight(height);
    }
    for(int i=0;i<3;i++)
    {
        cout << array[i].getWidth() << " " << array[i].getHeight() << " " << array[i].getArea() << endl;
    }

    cout << array[2].getNumOfRect() << " " << "Rectangles" << endl;
}
