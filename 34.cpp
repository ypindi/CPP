#include <stdio.h>

// function to print an array by passing reference to array
void printArray(int *arr, int n)
{
    // here array elements are passed by reference
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(&arr[0], 5);
    printArray(arr, 5);
    // both do the same thing.
    return 0;
}

//
// C program to demonstrate that compiler
// internally uses pointer arithmetic to access
// array elements.

// #include <stdio.h>

// int main()
// {
//     int arr[] = { 100, 200, 300, 400 };

//     // Compiler converts below to *(arr + 2).
//     printf("%d ", arr[2]);

//     // So below also works.
//     printf("%d\n", *(arr + 2));

//     return 0;
// }

//
// C program to dynamically allocate an
// array of given size.

// #include <stdio.h>
// #include <stdlib.h>
// int* createArr(int n)
// {
//     int* arr = (int*)(malloc(n * sizeof(int)));
//     return arr;
// }

// int main()
// {
//     int* pt = createArr(10);
//     return 0;
// }
