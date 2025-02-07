// sort first half in ascending order and
// 2nd half in descending order.

#include <stdio.h>
#include <math.h>

int main()
{
    int arr[] = {4, 3, 99, 22, -1, -5, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mid = ceil(n / 2);
    for (int i = 0; i < mid; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < mid; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    for (int i = mid; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\C>
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\C> g++ -o .\4_sortingDifferently.exe .\4_sortingDifferently.c
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\C> .\4_sortingDifferently.exe
// 3 4 22 99 -5 -1 2 3
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\C>