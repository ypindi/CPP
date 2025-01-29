// C++ Program to find Nth
// Armstrong Number
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int armstrong(int n)
{
    int total = 0, rem;
    for (int i = 0; i < INT_MAX; i++)
    {
        int count = 0, num;
        num = i;
        int digits = (int)log10(num) + 1;

        // int digits = to_string(num).size();
        // Correct way to find digit count

        while (num != 0)
        {
            rem = num % 10;
            num /= 10;
            count += pow(rem, digits);
        }
        if (count == i)
        {
            total += 1;
        }
        if (total == n)
        {
            return i;
        }
    }
    return 0;
}

// Driver code
int main()
{
    int n = 12;
    // cout << NthArmstrong(n);
    cout << armstrong(n);
    return 0;
}

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++> .\32.exe
// 371
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>

// Both the solutions work. Below one also works.
// Function to find Nth
// Armstrong Number
// int NthArmstrong(int n)
// {
//     int count = 0;

//     // Upper limit from integer
//     for (int i = 1; i <= INT_MAX; i++)
//     {
//         int num = i, rem, digit = 0, sum = 0;

//         // Copy the value for num in num
//         num = i;

//         // Find total digits in num
//         digit = (int)log10(num) + 1;

//         // Calculate sum of power of digits
//         while (num > 0)
//         {
//             rem = num % 10;
//             sum = sum + pow(rem, digit);
//             num = num / 10;
//         }
//         // Check for Armstrong number
//         if (i == sum)
//             count++;
//         if (count == n)
//             return i;
//     }
// }