#include <iostream>
using namespace std;

class Area
{
private:
    int length, breadth, height;
    int tempL, tempB, tempH;

public:
    Area(int l, int b) : length(l), breadth(b)
    {
        // can also use this->length too.
        // this->length = l;
        // this->breadth = b;
        cout << "Area issss: " << l * b << endl;
    };
    ~Area()
    {
        cout << "Destructor called. Area object will be destroyed and memory freed here." << endl;
    };

    int Perimeter()
    {
        // cout << "L is " << l << endl;
        return 2 * (length + breadth);
    }

    void setHeight(int h)
    {
        this->height = h;
    }

    void largestNumber()
    {
        tempL = length;
        tempB = breadth;
        tempH = height;
        cout << "Biggest value is " << ((tempL > tempB) ? (tempL > tempH ? tempL : tempH) : (tempB > tempH ? tempB : tempH)) << endl;
    }
};

int main()
{
    int l, b;
    cout << "Enter the Length and breadth: ";
    cin >> l >> b;
    Area g(l, b);
    int p = g.Perimeter();
    cout << "Perimeter is" << p << endl;
    cout << "----------" << endl;
    // finding the largest number
    // can also do: cout << max({a, b, c});
    g.setHeight(25);
    g.largestNumber();
    return 0;
}

// Output
// Enter the Length and breadth: 12 23
// Area issss: 276
// Perimeter is70
// ----------
// Biggest value is 25
// Destructor called. Area object will be destroyed and memory freed here.