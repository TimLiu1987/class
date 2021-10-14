#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    int Score[4][5];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            cin >> Score[i][j];

    float a[4] = {};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            a[i] += Score[i][j];
        }
        cout << a[i] / 5 << " ";
    }

}
