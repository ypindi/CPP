// Usage and scope of static variables in C

#include <iostream>
using namespace std;

class G
{
    static int x;

public:
    static int y;
    // x = 10;
    void func(int x)
    {
        cout << "Local value of x is " << x << endl;
        cout << "Static Class value of x is " << G::x << endl;
    }
};

int G::y = 0001;
int G::x = 97;

int main()
{
    G g;
    g.func(24);
    cout << g.y << endl;
    return 0;
}

// Output
// Local value of x is 24
// Static Class value of x is 97
// 1