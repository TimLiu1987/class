//
// Created by tim on 2021/3/9.
//

#include "Score.h"
#include <iostream>


Score::Score()
{

}

Score::Score(string newName, int newMath)
{
    name=newName;
    math=newMath;
}

int Score::getMath()
{
    return math;
}

string Score::getName()
{
    return name;
}

void Score::setMath(int M)
{
    math=M;
}

void Score::setName(string N)
{
    name=N;
}

void Score::print()
{
    cout << getName() << "  " << getMath() <<endl;
}
