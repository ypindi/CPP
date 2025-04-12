// C++ program to illustrate call-by-methods

#include <bits/stdc++.h>
using namespace std;

// Pass-by-Value
int square1(int n)
{
    // Address of n in square1() is not the same as n1 in
    // main()
    cout << "address of n1 in square1(): " << &n << "\n";

    // clone modified inside the function
    n *= n;
    return n;
}
// Pass-by-Reference with Pointer Arguments
void square2(int *n)
{
    // Address of n in square2() is the same as n2 in main()
    cout << "address of n2 in square2(): " << n << "\n";

    // Explicit de-referencing to get the value pointed-to
    *n *= *n;
}
// Pass-by-Reference with Reference Arguments
void square3(int &n)
{
    // Address of n in square3() is the same as n3 in main()
    cout << "address of n3 in square3(): " << &n << "\n";

    // Implicit de-referencing (without '*')
    n *= n;
}
void geeks()
{
    // Call-by-Value
    int n1 = 8;
    cout << "address of n1 in main(): " << &n1 << "\n";
    cout << "Square of n1: " << square1(n1) << "\n";
    cout << "No change in n1: " << n1 << "\n";
    cout << endl;

    // Call-by-Reference with Pointer Arguments
    int n2 = 8;
    cout << "address of n2 in main(): " << &n2 << "\n";
    square2(&n2);
    cout << "Square of n2: " << n2 << "\n";
    cout << "Change reflected in n2: " << n2 << "\n";
    cout << endl;

    // Call-by-Reference with Reference Arguments
    int n3 = 8;
    cout << "address of n3 in main(): " << &n3 << "\n";
    square3(n3);
    cout << "Square of n3: " << n3 << "\n";
    cout << "Change reflected in n3: " << n3 << "\n";
    cout << endl;
}
// Driver program
int main() { geeks(); }

// Output
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++> .\27.exe
// address of n1 in main(): 0xd869fff71c
// Square of n1: address of n1 in square1(): 0xd869fff6f0
// 64
// No change in n1: 8

// address of n2 in main(): 0xd869fff718
// address of n2 in square2(): 0xd869fff718
// Square of n2: 64
// Change reflected in n2: 64

// address of n3 in main(): 0xd869fff714
// address of n3 in square3(): 0xd869fff714
// Square of n3: 64
// Change reflected in n3: 64

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>

// Normal Pointer usage - same as n2 example above
// #include <iostream>

// void increment(int* ptr) {
//     // Increment the value pointed to by ptr
//     (*ptr)++;
// }

// int main() {
//     int num = 10;
//     std::cout << "Before increment: " << num << std::endl;

//     // Pass the address of num to the function
//     increment(&num);

//     std::cout << "After increment: " << num << std::endl;

//     return 0;
// }

// Pointers passed to functions
#include <iostream>

// Function to display array elements using a pointer
void displayArray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;
}

// Function to modify array elements by adding 5 to each element
// void modifyArray(int* ptr, int size) {
//     for (int i = 0; i < size; i++) {
//         *(ptr + i) += 5;
//     }
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the array size

//     std::cout << "Original array values:\n";
//     displayArray(arr, size);

//     // Modify array elements
//     modifyArray(arr, size);

//     std::cout << "Modified array values:\n";
//     displayArray(arr, size);

//     return 0;
// }

// Adding 2 pointers
// CPP program to demonstrate the subtraction of two
// pointers
// #include <iostream>
// using namespace std;

// int main()
// {

//     int num = 45;

//     int* ptr1 = &num;

//     // Adding 4 to ptr1 and stored in ptr2
//     int* ptr2 = ptr1 + 4;

//     cout << "Address stored in ptr1:" << ptr1 << endl;
//     cout << "Address stored in ptr2:" << ptr2 << endl;

//     // Subtracting ptr2 from ptr1
//     cout << "ptr2 - ptr1 = " << ptr2 - ptr1 << endl;

//     return 0;
// }

// Multiple Pointers
// C++ Program to illustrate the pointer comparison
// #include <iostream>
// using namespace std;

// int main()
// {
//     // declaring some pointers
//     int num = 10;
//     int* ptr1 = &num;
//     int** ptr2 = &ptr1;
//     int* ptr3 = *ptr2;

//     // comparing equality
//     if (ptr1 == ptr3) {
//         cout << "Both point to same memory location";
//     }
//     else {
//         cout << "ptr1 points to: " << ptr1 << endl;
//         cout << "ptr3 points to: " << ptr3 << endl;
//     }
//     return 0;
// }
