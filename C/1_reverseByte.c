#include <stdio.h>

int reverse(int myByte)
{
    int rev = 0;
    for (int i = 0; i < 8; i++)
    {
        rev |= ((myByte >> i) & 1) << (7 - i);
    }
    return rev;
}

int main()
{
    int myByte = 0b00101101;
    int reversed = reverse(myByte);
    printf("%d\n", reversed);
    printf("0b");
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", ((reversed >> i) & 1));
    }
    return 0;
}

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\C> g++ -o .\1_reverseByte.exe .\1_reverseByte.c
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\C> .\1_reverseByte.exe
// 180
// 0b10110100
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\C>