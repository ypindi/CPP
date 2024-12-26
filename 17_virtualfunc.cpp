#include <iostream>
using namespace std;

class Base
{
public:
    virtual void func() = 0;
};

class Derived : public Base
{
public:
    void func() override
    {
        cout << "Derived Class implementation" << endl;
    }
};

int main()
{
    Derived x;
    x.func();
    return 0;
}

// Method Chaining
// class MyClass {
// public:
//     MyClass& setValue(int x) {
//         value = x;
//         return *this;  // Returning the current object
//     }
// private:
//     int value;
// };
// MyClass obj;
// obj.setValue(5).setValue(10);  // Method chaining
