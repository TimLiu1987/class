//
// Created by tim on 2021/3/23.
//

#include "Date.h"
#include <iostream>

void Date::setDay(int newDay)
{
    day = newDay;
}

int Date::getDay() const
{
    return day;
}

void Date::setYear(int newYear)
{
    year = newYear;
}

int Date::getYear() const
{
    return year;
}

void Date::detMonth(int newMonth)
{
    month = newMonth;
}

int Date::getMonth() const
{
    return month;
}

void Date::print()
{
    cout << getMonth()<< "/" << getDay() << "/" << getYear();
}

Date::Date(int newMonth, int newDay, int newYear)
{
    month = newMonth;
    day = newDay;
    year = newYear;
}

Date::Date()
{

}
