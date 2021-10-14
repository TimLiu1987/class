#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    int Score[6];
    for (int i = 0; i < 6; i++)
        cin >> Score[i];
    int tot = 0, i = 0;
    while (i<6)
    {
        tot += Score[i];
        i++;
    }
    cout << tot;
}
