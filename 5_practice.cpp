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
    int totalVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Area a(10, 5);
    a.setHeight(20);
    cout << a.totalVolume() << endl;
    cout << a.getPerimeter() << endl;
    return 0;
}

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++> g++ -o .\5_practice.exe .\5_practice.cpp
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++> .\5_practice.exe
// Area constructor called
// 1000
// 30
// Destructor called
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>