#include<iostream>
#include"Queue.h"
using namespace std;

int main()
{
	int n1, n2;
	Queue<char> q;
	char c, op;
	for (int i = 0; i < 7; i++)
	{
		cin >> c;
		q.push(c);
	}

	while (q.getSize() != 1)
	{
		char a = q.getFront();
		//cout << "a:"<<a << endl;
		if (a == '+' || a == '-' || a == '*' || a == '/')
		{
			q.push(a);
			q.pop();
			continue;
		}
		n1 = (int)q.getFront() - 48;
		//cout << "n1:" << n1 << endl;
		q.pop();
		n2 = (int)q.getFront() - 48;
		//cout << "n2:" << n2 << endl;
		q.pop();
		op = q.getFront();
		//cout << "op:" << op << endl;
		q.pop();
		int tot = 0;
		if (op == '+')
			tot = n1 + n2;
		else if (op == '-')
			tot = n1 - n2;
		else if (op == '*')
			tot = n1 * n2;
		else if (op == '/')
			tot = n1 / n2;
		cout << tot << endl;
		q.push(tot + 48);
	}


}
