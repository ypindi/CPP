// checking how to define classes and declaring only the function inside it.
// definition of function of the class is outside the class.

#include <iostream>
using namespace std;

class G
{
public:
    void func();
};

void G::func()
{
    cout << "Func was called" << endl;
}

int main()
{
    G g;
    g.func();
    return 0;
}

// Output
// Func was called