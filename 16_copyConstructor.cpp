#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    int age;

public:
    Student(string, int, int);

    Student(Student &t)
    {
        name = t.name;
        roll = t.roll;
        age = t.age;
        cout << "Copy Constructor was called" << endl;
    }

    void display();
};

Student::Student(string n, int r, int a) : name(n), roll(r), age(a)
{
    // name = n;
    // roll = r;
    // age = a;
    cout << "Constructor" << endl;
}

void Student::display()
{
    cout << "Name is: " << this->name << endl;
    cout << "Roll Number is: " << this->roll << endl;
    cout << "Age is: " << this->age << endl;
}

int main()
{
    Student stu("Yashwanth", 22, 18);
    stu.display();
    Student stu2(stu);
    stu2.display();
    return 0;
}

// If we don’t define our own copy constructor, the C++ compiler creates a default copy
// constructor for each class which works fine in general. However, we need to define our
// own copy constructor only if an object has pointers or any runtime allocation of the resource
// like a file handle, a network connection, etc because the default constructor does only shallow copy.
