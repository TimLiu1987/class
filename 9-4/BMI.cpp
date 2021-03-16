#include "BMI.h"

BMI::BMI()
{
	
}

BMI::BMI(string newName, double newWeigh, double newHeigh)
{
	name = newName;
	height = newHeigh;
	weight = newWeigh;
}

double BMI::getBMI()
{
	return weight / (height * height);
}

string BMI::getName()
{
	return name;
}

double BMI::getWeight()
{
	return weight;
}

double BMI::getHeight()
{
	return height;
}
