#include <iostream>
using namespace std;

float floatMultiplication(float, float);
void fahrenheitToCelsius(float tempC);

int main()
{
    /*
    floatMultiplication()
    float a, b;
    cout << "Enter 2 float numbers to multiply:" << endl;
    // cout << a << b;
    cin >> a >> b;
    float c = floatMultiplication(a, b);
    cout << c << endl;
    cout << floatMultiplication(a, b);
    return 0;
    */

    /*
     float temp;
     cout << "Enter the temperature in Celsius:";
     cin >> temp;
     fahrenheitToCelsius(temp);
     return 0;
     */

    int var = 10;
    // int *ptr = &var;
    int *ptr;
    ptr = &var;

    cout << "var = " << var << endl;
    cout << "*ptr = " << *ptr;
    return 0;
}

float floatMultiplication(float a, float b)
{
    float c = a * b;
    cout << c;
    return c;
}

void fahrenheitToCelsius(float tempC)
{
    float tempF = (9.0 / 5.0) * tempC + 32.0;
    cout << tempF << endl;
}

// a = p * ((1 + r / 100) * *t)