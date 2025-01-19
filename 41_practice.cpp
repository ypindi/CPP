#include <iostream>
using namespace std;
#include <bits/stdc++.h>

template <typename T>
class Base
{
public:
    T a;
    T outp()
    {
        cout << "Output was called" << endl;
        return a;
    }
};

int main()
{
    Base<int> x;
    x.a = 25;
    int b = x.outp();
    cout << b << endl;
    return 0;
}

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>g++ -o 41_practice.exe 41_practice.cpp

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>41_practice.exe
// Output was called
// 25

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>