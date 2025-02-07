#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d ", a);
    printf("%d", b);
    return 0;
}

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\C> .\3_recerseNumbers.exe
// 20 10
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\C>