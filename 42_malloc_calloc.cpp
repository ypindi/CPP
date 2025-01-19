#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int *arr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

// int* arr = (int*)malloc(5 * sizeof(int)); // Initial allocation
// arr = (int*)realloc(arr, 10 * sizeof(int)); // Resize to 10 elements

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>g++ -o 42.exe 42_malloc_calloc.cpp

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>42.exe
// 1
// 2
// 3
// 4
// 5

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>

// Calloc
// int* arr = (int*)calloc(5, sizeof(int));

// if (arr == nullptr) {
//     std::cerr << "Memory allocation failed!" << std::endl;
//     return 1;
// }