#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    int tot=0, x;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        tot+=x;
    }

    if((tot/n)>=60)
    {
        cout << "及格";
    } else
    {
      cout << "不及格";
    }



    return 0;
}
