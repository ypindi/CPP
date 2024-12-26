#include <iostream>
using namespace std;

int *createArray(int);

int main()
{
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int *myArray = createArray(size);
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << "\t";
    }
    delete[] myArray;
    return 0;
}

int *createArray(int size)
{
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = i * 10;
    }
    return arr;
}
