#include <string>
using namespace std;

class Employee
{
private:
	string name;
	int income;
	int hours;

public:
	Employee();
	Employee(string, int, int);
	void setName(string);
	void setIncome(int);
	void setHours(int);
	string getName();
	int getIncome();
	int getHours();
	double getWage();

	void swapByReference(Employee& employee2);
	void swapByPointer(Employee* employee2);
};

