// Add 2 binary strings

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void addBinary(string s1, string s2)
{
    if (s2 > s1)
    {
        return addBinary(s2, s1);
    }

    int diff = s1.length() - s2.length();
    cout << diff << endl;
    string padding;
    int i = 0;
    for (i = 0; i < diff; i++)
    {
        padding.push_back('0');
    }
    s2 = padding + s2;

    char carry = '0';
    string res;
    int len = s1.length();
    for (i = len - 1; i >= 0; i--)
    {
        if (s1[i] == '1' && s2[i] == '1')
        {
            if (carry == '1')
            {
                carry = '1';
                res.push_back('1');
            }
            else
            {
                carry = '1';
                res.push_back('0');
            }
        }
        else if (s1[i] == '0' && s2[i] == '0')
        {
            if (carry == '1')
            {
                res.push_back('1');
                carry = '0';
            }
            else
            {
                res.push_back('0');
                carry = '0';
            }
        }
        else
        {
            if (carry == '1')
            {
                res.push_back('0');
                carry = '1';
            }
            else
            {
                res.push_back('1');
                carry = '0';
            }
        }
    }
    if (carry == '1')
    {
        res.push_back('1');
    }
    reverse(res.begin(), res.end());

    // To remove leading zeroes
    int index = 0;
    while (index + 1 < res.length() &&
           res[index] == '0')
        index++;
    return (res.substr(index));

    cout << res << endl;
}

int main()
{
    string s1 = "1101", s2 = "100";
    // cout << addBinary(s1, s2) << endl;
    addBinary(s2, s1);
    return 0;
}

// Can also remove leading 0s using this.
// Count leading zeros
// int i = 0;
// while (str[i] == '0')
//     i++;

// // The erase function removes i characters
// // from given index (0 here)
// str.erase(0, i);

// return str;

// or
// str = "00000123569";
// int num = stoi(str);
// str = to_string(num);

// cout << "String after removing leading zeros is: "
//      << str << endl;