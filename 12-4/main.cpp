#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

double stuAve(vector<double>average)
{
    double tot=0;
    for(int i=0;i<3;i++)
    {
        tot+=average[i];
    }

    return tot/3;
}

double* courseAve(vector<vector<double>> average)
{
    static double tot[3]={};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            tot[i]+=average[j][i];
        }
    }

    for(int k=0;k<3;k++)
    {
        tot[k]/=5;
    }

    return tot;
}

int main() {
    vector<vector<double>> score{
            {
                {80.0,  70.0,  90.0},
                {85.0,  77.0, 95.0},
                {83.0, 75.0, 70.0},
                {73.0, 95.0, 67.0},
                {88.0, 79.0, 71.0}
            }
    };

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << setprecision(1) << fixed << score[i][j] << ", ";
        }
        cout << setprecision(1) << fixed << stuAve(score[i]) << endl;
    }

    cout << "Average: ";

    double *a=courseAve(score);

    for(int i=0;i<2;i++)
    {
        cout << a[i] << ", ";
    }
    cout << a[2];
}
