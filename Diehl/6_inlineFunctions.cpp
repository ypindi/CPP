#include <iostream>
using namespace std;

#define SQUARE(x) (x * x)

inline int square(int x)
{
    return x * x;
}

class Square
{
public:
    inline int square2(int x)
    {
        return x * x;
    }
};

int main()
{
    cout << square(5) << endl;
    Square s;
    cout << s.square2(6) << endl;
    cout << SQUARE(7) << endl;
    return 0;
}

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\Diehl> g++ -o .\6_inlineFunctions.exe .\6_inlineFunctions.cpp
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\Diehl> .\6_inlineFunctions.exe
// 25
// 36
// 49
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\Diehl>