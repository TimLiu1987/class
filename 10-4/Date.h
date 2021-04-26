//
// Created by tim on 2021/3/23.
//

#ifndef DATE_H
#define DATE_H
using namespace std;

class Date
{
private:
    int year;
    int month;
    int day;

public:
    Date();
    Date(int ,int ,int);
    void setDay(int);
    int getDay() const;
    void setYear(int);
    int getYear() const;
    void detMonth(int);
    int getMonth() const;

    void print();

};


#endif //INC_10_4_DATE_H
