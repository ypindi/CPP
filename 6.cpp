// C++ program to check vowel or consonant using find()
// function
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int isVowel(char ch)
{
    // Make the list of vowels
    string str = "aeiouAEIOU";
    return (str.find(ch) != string::npos);
}

bool isVowelBruteForce(char m)
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (char v : vowels)
    {
        if (m == v)
        {
            return true;
        }
    }
    return false;
}

bool isVowel3(char ch)
{
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    return vowels.count(ch);
}

bool isVowel4(char ch)
{
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        return 1;
        break;

    default:
        return 0;
        break;
    }
}

// Driver code
int main()
{
    if (isVowel('a'))
        cout << "a is vowel" << endl;
    else
        cout << "a is consonant" << endl;

    // brute force way.
    char m = 'I';
    bool b = isVowelBruteForce(m);
    if (b)
    {
        cout << "It is a Vowel!!" << endl;
    }
    else
    {
        cout << "It is a consonant" << endl;
    }

    // isVowel3
    if (isVowel3('d'))
    {
        cout << "Vowel" << endl;
    }
    else
    {
        cout << "Consonant" << endl;
    }

    // isVowel4
    cout << endl
         << "isVowel4" << endl;
    if (isVowel4('U'))
    {
        cout << "isVowel4 says its a Vowel" << endl;
    }
    else
    {
        cout << "it is a consonant" << endl;
    }

    return 0;
}

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++> g++ -o .\6.exe .\6.cpp
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++> .\6.exe
// a is vowel
// It is a Vowel!!
// Consonant

// isVowel4
// isVowel4 says its a Vowel
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>