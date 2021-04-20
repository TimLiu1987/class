#include <iostream>
using namespace std;

template <typename T>
void InsertionSort(T list[], int listSize)
{
	for (int i = 1; i < listSize; i++)
	{
		T currentElement = list[i];
		int k;
		for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
		{
			list[k + 1] = list[k];
		}
		list[k + 1] = currentElement;
	}
}

template <typename T>
int BinarySearch(const T list[], T key, int listSize)
{
	int low = 0;
	int high = listSize - 1;

	while (high >= low)
	{
		int mid = (low + high) / 2;
		if (key < list[mid])
			high = mid - 1;
		else if (key > list[mid])
			low = mid + 1;
		else
			return mid;
	}

	return -1;
}

int main(){
    int list1[]={1,5,6,2,3,7,9,8,4};
    double list2[]={1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4};
    int IntArray[3]={};
    double DoubleArray[3]={};

    for(int i=0;i<3;i++)
    {
        int a;
        cin >> a;
        IntArray[i] = a;
    }

    for(int j=0;j<3;j++)
    {
        double b;
        cin >> b;
        DoubleArray[j] = b;
    }

    cout << "From: ";
    for(int i=0;i<8;i++)
    {
        cout << list1[i]<<",";
    }
    cout << list1[8] << endl;
    InsertionSort(list1,9);
    cout << "To: ";
    for(int i=0;i<8;i++)
    {
        cout << list1[i] << ",";
    }
    cout << list1[8] << endl;
    cout << IntArray[0] << " at " << BinarySearch(list1,IntArray[0],9)<< endl;
    cout << IntArray[1] << " at " << BinarySearch(list1,IntArray[1],9)<<endl;
    cout << IntArray[2] << " at " << BinarySearch(list1,IntArray[2],9)<<endl;


    cout << "From: ";
    for(int i=0;i<8;i++)
    {
        cout << list2[i] << ",";
    }
    cout << list2[8] << endl;
    InsertionSort(list2,9);
    cout << "To: ";
    for(int i=0;i<8;i++)
    {
        cout << list2[i] << ",";
    }
    cout << list2[8] << endl;
    cout << DoubleArray[0] << " at " << BinarySearch(list2,DoubleArray[0],9)<<endl;
    cout << DoubleArray[1] << " at " << BinarySearch(list2,DoubleArray[1],9)<<endl;
    cout << DoubleArray[2] << " at " << BinarySearch(list2,DoubleArray[2],9)<<endl;
    
}
