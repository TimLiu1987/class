#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    int max=0, min=1000, x;

    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x>max)
        {
            max =x;
        }
        if(x<min)
        {
            min = x;
        }
    }
    cout << max << " " << min;

    return 0;
}
