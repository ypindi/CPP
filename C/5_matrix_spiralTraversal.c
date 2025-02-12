// traverse a matrix spirally.

#include <stdio.h>

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int top = 0, bottom = 3, left = 0, right = 3;

    while (top <= bottom && left <= right)
    {
        // Left to Right
        for (int j = left; j <= right; j++)
        {
            printf("%d ", arr[top][j]);
        }
        top++;

        // Top to Bottom
        for (int i = top; i <= bottom; i++)
        {
            printf("%d ", arr[i][right]);
        }
        right--;

        // Right to Left
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                printf("%d ", arr[bottom][j]);
            }
            bottom--;
        }

        // Bottom to Top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                printf("%d ", arr[i][left]);
            }
            left++;
        }
    }

    return 0;
}

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\C> g++ -o .\5_matrix_spiralTraversal.exe
//  .\5_matrix_spiralTraversal.c
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\C> .\5_matrix_spiralTraversal.exe
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\C>

// int main()
// {
//     int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int nn = sizeof(arr[0]) / sizeof(arr[0][0]);
//     int count = 0;
//     int visited[4][4];
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             visited[i][j] = 0;
//         }
//     }
//     int i = 0;
//     int j = 0;
//     while (count < 16)
//     {
//         while (i < 4)
//         {
//             if (visited[i][j] != 1)
//             {
//                 visited[i][j] = 1;
//                 count += 1;
//                 printf("%d ", arr[i][j]);
//                 i += 1;
//                 if (i == 4)
//                 {
//                     break;
//                 }
//             }
//             else
//             {
//                 break;
//             }
//         }
//         while (j < 4)
//         {
//             if (visited[i][j] != 1)
//             {
//                 visited[i][j] = 1;
//                 count += 1;
//                 printf("%d ", arr[i][j]);
//                 j += 1;
//                 if (j == 4)
//                 {
//                     break;
//                 }
//             }
//             else
//             {
//                 break;
//             }
//         }
//         while (i >= 0)
//         {
//             if (visited[i][j] != 1)
//             {
//                 visited[i][j] = 1;
//                 count += 1;
//                 printf("%d ", arr[i][j]);
//                 i -= 1;
//                 if (i == 0)
//                 {
//                     break;
//                 }
//             }
//             else
//             {
//                 break;
//             }
//         }
//         while (j >= 0)
//         {
//             if (visited[i][j] != 1)
//             {
//                 visited[i][j] = 1;
//                 count += 1;
//                 printf("%d ", arr[i][j]);
//                 j -= 1;
//                 if (j == 0)
//                 {
//                     break;
//                 }
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }
//     return 0;
// }