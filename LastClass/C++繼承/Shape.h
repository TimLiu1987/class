#pragma once
#include <string>
using namespace std;

class Shape
{
private:
	string color;
public:
	Shape();
	Shape(string);
	void setColor(string);
	string getColor();
};

