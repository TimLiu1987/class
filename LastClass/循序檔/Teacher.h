#pragma once
#include <string>
using namespace std;

class Teacher
{
private:
	string name;
	int age;
	double score;

public:
	Teacher();
	Teacher(string, int, double);
	void setName(string);
	void setAge(int);
	void setScore(double);
	string getName();
	int getAge();
	double getScore();

	void writeToFile();
	void readFromFile();
	
};

