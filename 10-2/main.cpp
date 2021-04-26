#include <iostream>
#include "Rectangle.h"
using namespace std;

double sum(Rectangle rectArray[], int size)
{
    double tot=0;

    for(int i=0;i<size;i++)
    {
        tot+=rectArray[i].getArea();
    }

    return tot;
}

void printRectangleArray(Rectangle rectArray[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout << rectArray[i].getWidth() << " " << rectArray[i].getHeight() << " " << rectArray[i].getArea() << endl;
    }
}

int main()
{
    Rectangle array[4];

    for(int i=0;i<4;i++)
    {
        double width,height;
        cin >> width >> height;

        array[i].setWidth(width);
        array[i].setHeight(height);
    }
    printRectangleArray(array , 4);

    cout << "Total: " << sum(array, 4);
}
