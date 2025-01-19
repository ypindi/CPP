#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout << *i << "\t";
    }
    // return 0;

    string s = "Geeks \0 wetdg";
    cout << s.substr(1, 4) << endl;
    cout << s.size() << endl;
    cout << s.length() << endl;
    // from index 1 for a length of 4.
    return 0;
}

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>g++ -o testing.exe testing.cpp

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>testing.exe
// 1       2       3       4       5       eeks
// 6
// 6

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>