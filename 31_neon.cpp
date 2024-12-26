#include <iostream>
#include <vector>
using namespace std;

class Neon
{
    int range1, range2;
    vector<int> individualNumbers;

public:
    Neon(int r1, int r2) : range1(r1), range2(r2)
    {
        cout << "Constructor Called" << endl;
    }
    void findNeon(int num)
    {
        int i = 0, count = 0, square = num * num;
        while (square != 0)
        {
            i = square % 10;
            square /= 10;
            count += i;
        }
        if (count == num)
        {
            individualNumbers.push_back(num);
        }
    }
    void getNeons()
    {
        for (int i = range1; i <= range2; ++i)
        {
            findNeon(i);
        }
        cout << "All Neon Numbers in this range are: " << endl;
        for (int neon : individualNumbers)
        {
            cout << neon << "\t";
        }
    }
};

int main()
{
    Neon neons(1, 15);
    neons.getNeons();
    return 0;
}