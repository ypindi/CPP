// C Program to create a simpe calculator using switch
// statement
#include <iostream>
#include <stdlib.h>
using namespace std;

// driver code
int main()
{
    // switch variable
    char choice;
    // operands
    int x, y;

    while (1)
    {
        cout << "Enter the Operator (+,-,*,/)\nEnter x to "
                "exit\n";
        cin >> choice;

        // for exit
        if (choice == 'x')
        {
            // exit(0);
            break;
            // both exit and break in this program do the same thing.
            // Exit is to terminate entire program
            // break is to exit loop (here, while loop).
        }

        cout << "Enter the two numbers: ";
        cin >> x >> y;

        // switch case with operation for each operator
        switch (choice)
        {
        case '+':
            cout << x << " + " << y << " = " << x + y
                 << endl;
            break;

        case '-':
            cout << x << " - " << y << " = " << x - y
                 << endl;
            break;

        case '*':
            cout << x << " * " << y << " = " << x * y
                 << endl;
            break;
        case '/':
            cout << x << " / " << y << " = " << x / y
                 << endl;
            break;
        default:
            printf("Invalid Operator Input\n");
        }
    }
    return 0;
}
