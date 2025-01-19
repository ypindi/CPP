#include <iostream>
using namespace std;

class Name
{
private:
    string nameee;

public:
    void setName(string name)
    {
        this->nameee = name;
    }

    void getName()
    {
        cout << "Hellooooooo" << this->nameee << endl;
    }

    void doNothing();
};

void Name::doNothing()
{
    cout << "Displaying the concept of defining member functions from outside the class" << endl;
}

int main()
{
    string name;
    cout << "What is your name? ";
    cin >> name;
    Name n;
    n.setName(name);
    n.getName();
    n.doNothing();
    return 0;
}

// Output
// What is your name? Anusha
// HelloooooooAnusha

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>g++ -o 12.exe 12.cpp

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>12.exe
// What is your name? Anusha
// HelloooooooAnusha
// Displaying the concept of defining member functions from outside the class

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>