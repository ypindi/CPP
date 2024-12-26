#include <iostream>
using namespace std;

void func(const string *str)
{
    cout << *str << endl;
}

int main()
{
    string x = "Pass by reference";
    func(&x);
    return 0;
}