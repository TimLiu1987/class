#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void printStringArray(string word[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout << word[i] << endl;
    }
}

int main()
{
    string a;
    string ahoy[10];
    int size =0;
    getline(cin, a);
    stringstream ss(a);

    while (!ss.eof())
    {
        ss >> ahoy[size];
        size++;
    }

    printStringArray(ahoy, size);

    cout << "Length:" << a.length() << endl;
    // cout << a.insert(a.length(),"!!!");
}
