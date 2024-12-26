// C program to illustrate sizes of
// pointer of array
#include <stdio.h>

int main()
{
    int arr[] = {3, 5, 6, 7, 9};
    int *p = arr;
    int(*ptr)[5] = &arr;

    printf("p = %p, ptr = %p\n", p, ptr);
    printf("*p = %d, *ptr = %p\n", *p, *ptr);

    printf("\n");
    // Accessing the elements
    printf("%d", (*ptr)[3]);
    printf("\n");
    printf("%d", *(p + 3));
    printf("\n");

    printf("sizeof(p) = %lu, sizeof(*p) = %lu\n",
           sizeof(p), sizeof(*p));
    printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n",
           sizeof(ptr), sizeof(*ptr));
    return 0;
}

// 3D Arrays
//  *(*(*(arr + i ) + j ) + k) is equivalent to the subscript expression arr[i][j][k].

// // C program to print elements of a 2-D array
// by scripting a pointer to an array
// #include <stdio.h>

// int main()
// {
//   int arr[3][4] = {
//                     {10, 11, 12, 13},
//                     {20, 21, 22, 23},
//                     {30, 31, 32, 33}
//                   };
//   int (*ptr)[4];
//   ptr = arr;
//   printf("%p %p %p\n", ptr, ptr + 1, ptr + 2);
//   printf("%p %p %p\n", *ptr, *(ptr + 1), *(ptr + 2));
//   printf("%d %d %d\n", **ptr, *(*(ptr + 1) + 2), *(*(ptr + 2) + 3));
//   printf("%d %d %d\n", ptr[0][0], ptr[1][2], ptr[2][3]);
//   return 0;
// }
// Output
// 0x7ffc9556b790 0x7ffc9556b7a0 0x7ffc9556b7b0
// 0x7ffc9556b790 0x7ffc9556b7a0 0x7ffc9556b7b0
// 10 22 33
// 10 22 33