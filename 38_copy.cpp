#include <iostream>
using namespace std;

class Base
{
private:
    int basePrivate;

public:
    Base(int b) : basePrivate(b) {}
    int getPrivate()
    {
        return basePrivate;
    }
    void setPrivate(int x)
    {
        this->basePrivate = x;
    }
};

class Derived : public Base
{
private:
    int derivedPrivate;

public:
    Derived(int b, int d) : Base(b), derivedPrivate(d) {}
    void displayBasePrivate()
    {
        cout << "Private value from Base Class is " << getPrivate() << endl;
    }
    void setBasePrivate(int y)
    {
        setPrivate(y);
    }
    void displayDerivedPrivate()
    {
        cout << "Private value from Derived Class is " << derivedPrivate << endl;
    }
    void setDerivedPrivate(int y)
    {
        this->derivedPrivate = y;
    }
};

int main()
{
    Base obj1(10);
    cout << obj1.getPrivate() << endl;
    obj1.setPrivate(20);
    cout << obj1.getPrivate() << endl;

    Derived obj2(30, 97);
    cout << "Base Private: ";
    obj2.displayBasePrivate();
    cout << endl;
    obj2.setBasePrivate(35);
    cout << "Base Private: ";
    obj2.displayBasePrivate();
    cout << endl;

    cout << "Derived Private is ";
    obj2.displayDerivedPrivate();
    cout << endl;
    obj2.setDerivedPrivate(99);
    cout << "Derived Private is ";
    obj2.displayDerivedPrivate();
    cout << endl;

    return 0;
}