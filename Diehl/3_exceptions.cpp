#include <iostream>
using namespace std;

int main()
{
    // try
    // {
    //     throw runtime_error("Error occurred");
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    try
    {
        // int x = 5 / 0;
        int divisor = 0;
        if (divisor == 0)
        {
            throw runtime_error("Error Occurred");
        }
        int x = 5 / divisor;
    }
    catch (const exception &e)
    {
        cerr << e.what() << endl;
    }
    return 0;
}

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\Diehl> g++ -o .\3_exceptions.exe .\3_exceptions.cpp
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\Diehl> .\3_exceptions.exe
// Error Occurred
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\Diehl>