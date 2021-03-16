//
// Created by tim on 2021/3/9.
//

#ifndef SCORE_H
#define SCORE_H
#include <string>
using namespace std;

class Score
{
private:
    string name;
    int math;
public:
    Score();
    Score(string ,int );
    string getName();
    int getMath();
    void setName(string );
    void setMath(int );

    void print();
};


#endif //SCORE_H
