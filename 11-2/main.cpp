#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

void swapByReference(Rectangle &r1, Rectangle &r2)
{
    Rectangle tmp=r2;
    r2 = r1;
    r1=tmp;
}
void swapByPointer(Rectangle *r1, Rectangle *r2)
{
    Rectangle tmp=*r2;
    *r2 = *r1;
    *r1=tmp;
}

int main() {

        double width1,height1,width2,height2;

        cin >> width1 >> height1 >> width2 >> height2;

        Rectangle rectangle1(width1,height1);
        Rectangle rectangle2(width2,height2);

        cout << "SwapByReference:" << setprecision(2) << fixed <<rectangle1.getArea() << " " << rectangle2.getArea() << " to";
        swapByReference(rectangle1,rectangle2);
        cout << setprecision(2) << fixed << rectangle1.getArea() << " " << rectangle2.getArea()<<endl;
        cout << "SwapByPointer:" << setprecision(2) << fixed << rectangle1.getArea() << " " << rectangle2.getArea() << " to";
        swapByPointer(&rectangle1,&rectangle2);
        cout << setprecision(2) << fixed << rectangle1.getArea() << " " << rectangle2.getArea()<<endl;


}
