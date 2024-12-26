// C++ Program to demonstrate string concatenation
// using std::append()
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1("Hello");
    string str2(" World");

    // Concatenation str1 and str2
    str1.append(str2);

    cout << str1 << endl;
    return 0;
}

// Additional Stuff below

void relationalOperation(string s1, string s2)
{
    if (s1 != s2)
    {
        cout << s1 << " is not equal to " << s2 << endl;
        if (s1 > s2)
            cout << s1 << " is greater than " << s2 << endl;
        else
            cout << s2 << " is greater than " << s1 << endl;
    }
    else
        cout << s1 << " is equal to " << s2 << endl;
}

void compareFunction(string s1, string s2)
{
    // comparing both using inbuilt function
    int x = s1.compare(s2);

    if (x != 0)
    {
        cout << s1
             << " is not equal to "
             << s2 << endl;
        if (x > 0)
            cout << s1
                 << " is greater than "
                 << s2 << endl;
        else
            cout << s2
                 << " is greater than "
                 << s1 << endl;
    }
    else
        cout << s1 << " is equal to " << s2 << endl;
}

// C++ Program to demonstrate string concatenation
// using '+' operator
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1("Hello");
    string str2(" World");

    // Concatenation str1 and str2
    str1 = str1 + str2;
    // or
    // strcat(str1, str2);

    // or
    // Adding characters of str2 at the end of str1
    // for (auto i : str2)
    //     str1 += i;

    cout << str1 << endl;
    return 0;
}
