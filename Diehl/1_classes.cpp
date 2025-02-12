#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

class Base
{
private:
    int data;

public:
    Base(int d) : data(d)
    {
        cout << "Base constructor" << endl;
    }
    virtual void display()
    {
        cout << "Base class data: " << this->data << endl;
    }
};

class Derived : public Base
{
private:
    int data2;

public:
    Derived(int d, int d2) : Base(d), data2(d)
    {
        cout << "Derived constructor" << endl;
    };
    ~Derived();
    void display() override final
    {
        cout << "Derived class data: " << this->data2 << endl;
    };
};

Derived::~Derived()
{
    cout << "Destructor of derived class called" << endl;
}

int main()
{
    Base *b = new Derived(12, 24);
    b->display();
    return 0;
}

// Base b = Derived(); // Object slicing: `data2` is discarded.

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\Diehl> g++ -o .\1_classes.exe .\1_classes.cpp
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\Diehl> .\1_classes.exe
// Base constructor
// Derived constructor
// Derived class data: 12
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\Diehl>
