#include <iostream>
#include "stack.h"
#include <sstream>
using namespace std;

int main() {

    char ahoy;
    Stack<char>stack;

    for(int i=0;i<9;i++)
    {
        cin >> ahoy;
        stack.push(ahoy);
    }
    
    int a,b;
    char yubi;
    for(int i=0;i<4;i++)
    {
        a=(int)stack.pop()-48;
        yubi = stack.pop();
        b=(int)stack.pop()-48;

        if(yubi == '*')
        {
            stack.push((char)(b*a)+48);
        }
        else if(yubi == '/')
        {
            stack.push((char)(b/a)+48);
        }
        else if(yubi == '-')
        {
            stack.push((char)(b-a)+48);
        }
        else if(yubi == '+')
        {
            stack.push((char)(b+a)+48);
        }

        cout << (int)stack.peek()-48 << endl;

    }
}
