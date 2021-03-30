#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main() {

        double width1,height1,width2,height2;

        cin >> width1 >> height1 >> width2 >> height2;

        Rectangle rectangle1(width1,height1);
        Rectangle rectangle2(width2,height2);

        cout << "SwapByReference:" << setprecision(2) << fixed << rectangle1.getArea() << " " << rectangle2.getArea() << " to";
        rectangle1.swapByReference(rectangle2);
        cout << setprecision(2) << fixed << rectangle1.getArea() << " " << rectangle2.getArea()<<endl;
        cout << "SwapByPointer:" << setprecision(2) << fixed << rectangle1.getArea() << " " << rectangle2.getArea() << " to";
        rectangle1.swapByPointer(&rectangle2);
        cout << setprecision(2) << fixed << rectangle1.getArea() << " " << rectangle2.getArea()<<endl;


}
