// Transferring ownership completely

std::string str = "Hello, World!";
std::string newStr = std::move(str); // Ownership of "Hello, World!" is moved to newStr

string str = "hello";
string str2 = std::move(str)

    // Lambda functions
    auto add = [](int a, int b) -> int
{ return a + b; };
std::cout << add(5, 3); // Output: 8

auto add = [](int a, int b) -> int
{ return a + b; };

// Pointer and reference
int x = 10;
int &ref = x;  // ref is a reference to x
int *ptr = &x; // ptr is a pointer to x

ref = 20;  // Changes x to 20
*ptr = 30; // Also changes x to 30

// Operator Overloading
// You can redefine how an operator behaves for user defined types (classes).
class Complex
{
public:
    int real, imag;

    Complex(int r, int i) : real(r), imag(i) {}

    // Overload the + operator
    Complex operator+(const Complex &other)
    {
        return Complex(real + other.real, imag + other.imag);
    }
};

int main()
{
    Complex c1(1, 2), c2(3, 4);
    Complex c3 = c1 + c2;                       // Calls the overloaded + operator
    cout << c3.real << " + " << c3.imag << "i"; // Outputs: 4 + 6i
}

// Friend Function
class MyClass
{
private:
    int data;

public:
    MyClass(int d) : data(d) {}

    // Declare a friend function
    friend void showData(MyClass &obj);
};

// Friend function definition
void showData(MyClass &obj)
{
    cout << "Data: " << obj.data; // Can access private members
}

// Function Pointers

#include <iostream>

using namespace std;

void greet()
{
    cout << "Hello!" << endl;
}

int main()
{
    // Declare a function pointer
    void (*funcPtr)() = &greet;

    // Call the function through the pointer
    funcPtr(); // Output: Hello!
}
