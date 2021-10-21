#include <iostream>
using namespace std;

const int rows = 4;
const int columns = 4;
int a[rows][columns];

void matrix_init(int arr[][columns])
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> arr[i][j];
}

void matrix_transpose(int arr[][columns])
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            a[i][j]=arr[j][i];
        }
    }



//    for(int i=0;i<rows;i++)
//    {
//        for(int j=0;j<columns;j++)
//        {
//            cout << a[i][j]<<" ";
//        }
//        cout << endl;
//    }
}

void matrix_print(int arr[][columns])
{
    int n=0;
    int a[16];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            a[n] = arr[i][j];
            n++;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}

int main(int argc, char* argv[]) {
    int A[rows][columns];
    matrix_init(A);
    matrix_transpose(A);
    matrix_print(a);
}
