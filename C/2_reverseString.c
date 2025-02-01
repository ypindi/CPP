#include <stdio.h>
#include <string.h>

void reverseString(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main()
{
    char str[] = "C Programming";
    reverseString(str);
    printf("Reversed: %s\n", str);
}

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\C> g++ -o .\2_reverseString.exe .\2_reverseString.c
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\C> .\2_reverseString.exe
// Reversed: gnimmargorP C
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\C>