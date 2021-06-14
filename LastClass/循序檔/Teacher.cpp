#include "Teacher.h"
#include <fstream>
#include <sstream>
#include <iomanip>
#include <iostream>
using namespace std;

Teacher::Teacher()
{
}

Teacher::Teacher(string n, int a, double s)
{
	name = n;
	age = a;
	score = s;
}

void Teacher::setName(string n)
{
	name = n;
}

void Teacher::setAge(int a)
{
	age = a;
}

void Teacher::setScore(double s)
{
	score = s;
}

string Teacher::getName()
{
	return name;
}

int Teacher::getAge()
{
	return age;
}

double Teacher::getScore()
{
	return score;
}

void Teacher::writeToFile()
{
	fstream file;
	stringstream ss;

	file.open("Teacher.txt", ios::out | ios::app);
	file << name << " " << age << " " << score << endl;

	file.close();
}

void Teacher::readFromFile()
{
	ifstream input("Teacher.txt");

	for (int i = 0; i < 4; i++)
	{
		input >> name >> age >> score;
		cout << setprecision(1) << fixed << name << " " << age << " " << score << endl;
	}
}
