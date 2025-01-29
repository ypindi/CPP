// C++ program to demonstrate constructors
// different types of constructors in same class
#include <bits/stdc++.h>
using namespace std;
class Geeks
{
public:
    int id;

    // Default Constructor
    Geeks()
    {
        cout << "Default Constructor called" << endl;
        id = -1;
    }

    // Parameterized Constructor
    Geeks(int x)
    {
        cout << "Parameterized Constructor called " << endl;
        id = x;
    }
};
int main()
{

    // obj1 will call Default Constructor
    Geeks obj1;
    cout << "Geek id is: " << obj1.id << endl;

    // obj2 will call Parameterized Constructor
    Geeks obj2(21);
    cout << "Geek id is: " << obj2.id << endl;
    return 0;
}

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++> g++ -o .\13.exe .\13.cpp
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++> .\13.exe
// Default Constructor called
// Geek id is: -1
// Parameterized Constructor called
// Geek id is: 21
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>