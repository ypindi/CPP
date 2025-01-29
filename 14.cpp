// reverse a string

// C++ Program to illustrate how to reverse a string using
// the reverse function from the algorithm library
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Define a string
    string str = "Hello, World!";

    // Create an empty string with the same size as the original
    string str2(str.size(), '\0'); // Pre-allocate memory for str2

    int j = str.size() - 1; // Start from the last character of str
    int i = 0;

    // Reverse the string by copying characters into str2
    while (j >= 0)
    {
        str2[i] = str[j];
        j--;
        i++;
    }

    int x = str.size() - 1;
    int y = 0;
    string str3;
    while (x >= 0)
    {
        // str3[y] = str[x];
        // x--;
        // y++;
        str3.push_back(str[x]);
        x--;
    }

    cout << "Reversed string: " << str2 << endl;
    cout << "Reversed string: " << str3 << endl;

    return 0;
}

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++> g++ -o .\14.exe .\14.cpp
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++> .\14.exe
// Reversed string: !dlroW ,olleH
// Reversed string: !dlroW ,olleH
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>

// str2.append(str[j]);

// My Tries

// // Define a string
// string str = "Hello, World!";

// // Reverse the string using the reverse function from
// // the algorithm library
// reverse(str.begin(), str.end());

// // Output the reversed string
// cout << "Reversed string: " << str << endl;

// int j = 0, i = 0;
// string str2;
// while (str[j])
// {
//     j++;
// }
// for (j; j > 0; j--, i++)
// {
//     str2[i] = str[j];
// }
// cout << "Re-Reversed string: " << str2 << endl;

// return 0;