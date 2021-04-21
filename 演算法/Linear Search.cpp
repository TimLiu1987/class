#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& data, int key)
{
    for (int i=0 ; i<data.size() ; i++)
    {
        if (data[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main(int argc, char *argv[])
{
    vector<int> A;
	int i, n, v;
	for(cin >> i; i > 0; i--)
	{
	    cin >> n;
	    A.push_back(n);
	}
	cin >> v;

	cout << linearSearch(A,v) << endl;
}
