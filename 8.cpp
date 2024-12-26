// To Swap 2 Characters in a String.

#include <iostream>
#include <string.h>
using namespace std;

class CharReplace
{
private:
    /* data */
    char char1, char2;
    string string1;

public:
    CharReplace(char c1, char c2, string s) : char1(c1), char2(c2), string1(s) {};
    ~CharReplace()
    {
        cout << "CharReplace object has been destroyed." << endl;
    };

    void replace()
    {
        int i = 0;
        while (string1[i] != '\0')
        {
            if (string1[i] == this->char1)
            {
                string1[i] = this->char2;
            }
            else if (string1[i] == this->char2)
            {
                string1[i] = this->char1;
            }
            i++;
        }
        cout << string1 << endl;
    }
};

int main()
{
    char c1, c2;
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << endl
         << "Enter the first character to replace: ";
    cin >> c1;
    cout << endl
         << "Enter the second character to replace: ";
    cin >> c2;

    CharReplace replacing(c1, c2, s);
    replacing.replace();

    return 0;
}

// Enter the string: Yashwanth

// Enter the first character to replace: a

// Enter the second character to replace: h
// Yhsawhnta
// CharReplace object has been destroyed.