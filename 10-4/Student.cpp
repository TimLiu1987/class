//
// Created by tim on 2021/3/23.
//

#include "Student.h"
#include "Date.h"
#include <iostream>

Student::Student(string newName, Date newDate, int newScore)
{
    name = newName;
    birthDay = newDate;
    score = newScore;
}

void Student::setName(string newName)
{
    name = newName;
}

string Student::getName() const
{
    return name;
}

void Student::setDate(Date newDate)
{
    birthDay = newDate;
}

Date Student::getDate() const
{
    return birthDay;
}

void Student::setScore(int newScore)
{
    score = newScore;
}

int Student::getScore() const
{
    return score;
}

void Student::print()
{
    cout << getName() << " ";
    birthDay.print();
    cout << " " << getScore() << endl;
}

Student::Student()
{

}
