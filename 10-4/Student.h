//
// Created by tim on 2021/3/23.
//

#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Date.h"
using namespace std;

class Student
{
private:
    string name;
    Date birthDay;
    int score;
public:
    Student();
    Student(string, Date, int);
    void setName(string);
    string getName() const;
    void setDate(Date);
    Date getDate() const;
    void setScore(int);
    int getScore() const;

    void print();
};


#endif //STUDENT_H
