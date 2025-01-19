// Find the length of a string

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string G = "GeeksforGeeks  \0 Hellooo";
    cout << G.size() << endl;
    cout << G.length() << endl;

    int i = 0;
    while (G[i])
    {
        i++;
    }
    cout << i << endl;

    cout << "--------------" << endl;
    cout << G[5] << endl;
    cout << G.at(5) << endl;
    // from index 1 for a length of 3.
    cout << G.substr(1, 3) << endl;
    i = 1;
    for (i = 1; i < 6; i++)
    {
        cout << G[i];
    }
    cout << endl;

    // find a particular pattern
    // can also use cout << s.find("For");
    cout << "////////////////////////" << endl;
    int x = 0, y = 0, z = 0;
    string pattern = "Ge";
    int lengthP = 0, lengthG = 0;
    while (pattern[lengthP])
    {
        lengthP++;
    }
    cout << lengthP << endl;
    while (G[lengthG])
    {
        lengthG++;
    }
    cout << lengthG << endl;
    for (x = 0; x < lengthG - lengthP + 1; x++)
    {
        cout << x << endl;
        z = 0;
        for (y = 0; y < lengthP; y++)
        {
            if (G[x + y] != pattern[y])
            {
                break;
            }
            else
            {
                z++;
            }
        }
        if (z == lengthP)
        {
            cout << "Found the pattern at position " << x + 1 << endl;
            break;
        }
    }

    cout << G.find_first_of('s');
    cout << G.find_last_of('s');
    return 0;
}