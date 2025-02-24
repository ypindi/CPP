#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of elements: " << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout << "Elements you added are: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << "\t";
    }
    cout << endl
         << "-----------" << endl;
    int zero_array[5] = {2};
    for (int i = 0; i < 5; ++i)
    {
        cout << zero_array[i] << "\t";
    }
    //
    //
    // Length of an array
    int n2 = sizeof(arr) / sizeof(arr[0]);

    cout << "Length of an array: " << n2 << endl;

    int *ptr = arr;
    cout << ptr << endl;
    cout << &arr << endl;
    // In the above code, we first define an array “arr” and then
    // declare a pointer “ptr” and assign the array “arr” to it.
    // We are able to assign arr to ptr because arr is also a pointer.

    // Print elements of an array
    cout << "first element: " << *arr << endl;
    cout << "Second element: " << *(arr + 1) << endl;
    cout << "Third element: " << *(arr + 2) << endl;
    cout << "fourth element: " << *(arr + 3) << endl;
    // To print the second element of an array we first add 1
    // to arr which is equivalent to (address of arr + size_of_one_element *1)

    return 0;
}

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>g++ -o 35.exe 35_arrays.cpp

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>35.exe
// Enter the number of elements:
// 3
// Enter the elements: 1 2 3
// Elements you added are: 1       2       3
// -----------
// 2       0       0       0       0       Length of an array: 3
// 0x25451ff7b0
// 0x25451ff7b0
// first element: 1
// Second element: 2
// Third element: 3
// fourth element: 499

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>