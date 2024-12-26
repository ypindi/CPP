// C++ Program to demonstrate string concatenation
// using '+' operator
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1("Hello");
    string str2(" World");

    // method 1
    // Concatenation str1 and str2
    // str1 = str1 + str2;
    // cout << str1 << endl;

    // method 2
    char str3[] = "Hello ";
    char str4[] = "Worldddd";
    strcat(str3, str4);
    cout << str3 << endl;

    // method 3
    // Adding characters of str2 at the end of str1
    // for (auto i : str2)
    //     str1 += i;
    // cout << str1 << endl;

    return 0;
}
