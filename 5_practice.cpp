#include <iostream>
using namespace std;

class Area
{
private:
    int length, breadth, height;

public:
    Area(int l, int b) : length(l), breadth(b)
    {
        cout << "Area constructor called" << endl;
    }
    ~Area()
    {
        cout << "Destructor called" << endl;
    }
    void setHeight(int h)
    {
        this->height = h;
    }
    int getPerimeter()
    {
        return 2 * (length + breadth);
    }
    int getArea()
    {
        return length * breadth;
    }
};

int main()
{
    Area a(10, 5);
    cout << a.getPerimeter() << endl;
    return 0;
}

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++> g++ -o .\5_practice.exe .\5_practice.cpp
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++> .\5_practice.exe
// Area constructor called
// 30
// Destructor called
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>