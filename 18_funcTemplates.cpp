#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

template <typename C>
class Base
{
    C value;

public:
    Base(C v) : value(v) {}
    C outp()
    {
        return this->value;
    }
};

int main()
{
    cout << "function templates below:" << endl;
    cout << add(3, 5) << endl;
    cout << add(3.45, 5.67) << endl;
    cout << "Class templates below:" << endl;
    Base<int> intBase(24);
    Base<double> doubleBase(24.24);
    cout << intBase.outp() << endl;
    cout << doubleBase.outp() << endl;
    return 0;
}

// Template Specialization
// Different templates for each type passed

// #include <iostream>
// using namespace std;

// template <typename T>
// class Box {
//    private:
//     T value;

//    public:
//     Box(T v) : value(v) {}

//     void display() {
//         cout << "Value: " << value << endl;
//     }
// };

// // Specialization for type char
// template <>
// class Box<char> {
//    private:
//     char value;

//    public:
//     Box(char v) : value(v) {}

//     void display() {
//         cout << "Character: " << value << endl;
//     }
// };

// int main() {
//     Box<int> intBox(123);
//     Box<char> charBox('A');

//     intBox.display();  // Calls general template
//     charBox.display(); // Calls specialized template

//     return 0;
// }
