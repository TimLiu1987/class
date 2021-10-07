#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    int q[n], number;
    for(int i=0;i<n;i++)
    {
        cin >> number;
        q[i]=number;
    }

    for(int i=n-1;i>=0;i--)
    {
        cout << q[i] << " ";
    }
    cout << endl;

    return 0;
}
