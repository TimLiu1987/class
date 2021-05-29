#include "Employee.h"

Employee::Employee()
{
}

Employee::Employee(string n, int i, int h)
{
	name = n;
	income = i;
	hours = h;
}

void Employee::setName(string newName)
{
	name = newName;
}

void Employee::setIncome(int newIncome)
{
	income = newIncome;
}

void Employee::setHours(int newHours)
{
	hours = newHours;
}

string Employee::getName()
{
	return name;
}

int Employee::getIncome()
{
	return income;
}

int Employee::getHours()
{
	return hours;
}

double Employee::getWage()
{
	return getIncome() * 1.0 / getHours() * 1.0;
}

void Employee::swapByReference(Employee& employee2)
{
	Employee emp = employee2;
	employee2 = *this;
	*this = emp;
}

void Employee::swapByPointer(Employee* employee2)
{
	Employee emp = *employee2;
	*employee2 = *this;
	*this = emp;
}
