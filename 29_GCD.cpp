#include <iostream>
using namespace std;

int main()
{
    int num1 = 13, num2 = 39;
    if (num1 < num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 % num2 == 0)
    {
        cout << "GCD is " << num2 << endl;
        return 0;
    }
    int gcd = num2 / 2;
    cout << "Current GCD value is " << gcd << endl;
    if (num1 % gcd == 0 && num2 % gcd == 0)
    {
        cout << "GCD iss " << gcd << endl;
        return 0;
    }
    gcd -= 1;
    while (gcd != 0)
    {
        if (num1 % gcd == 0 && num2 % gcd == 0)
        {
            cout << "GCD issss " << gcd << endl;
            return 0;
        }
        gcd -= 1;
    }
    cout << "GCD issssssssssss 1" << endl;
    return 0;
}

// Most Efficient Way 1
// long long gcd(long long int a, long long int b)
// {
//     if (b == 0)
//         return a;

//     return gcd(b, a % b);
// }

// More efficient way 2
// int gcd(int a, int b) {

//     // Everything divides 0
//     if (a == 0)
//         return b;
//     if (b == 0)
//         return a;

//     // If both numbers are equal
//     if (a == b)
//         return a;

//     // If a is greater
//     if (a > b)
//       return gcd(a - b, b);

//     // If b is greater
//     return gcd(a, b - a);
// }

// USing functions inbuilt C++ 14
//     // Finding gcd of a and b using __gcd()
// cout << __gcd(a, b) << endl;

// USing functions inbuilt C++ 17
// Finding gcd of a and b using gcd()
// cout << gcd(a, b);

//
//
//
// Least Common Multiple 1
// cout << "LCM(10,20) = " << lcm(10, 20) << endl;
// return 0;

// Finding LCM Using GCD 2
// C++ program to find LCM
// of two numbers
// #include <iostream>
// using namespace std;

// // Recursive function to return
// // gcd of a and b
// long long gcd(long long int a, long long int b)
// {
// 	if (b == 0)
// 		return a;

// 	return gcd(b, a % b);
// }

// // Function to return LCM of
// // two numbers
// long long lcm(int a, int b) { return (a / gcd(a, b)) * b; }

// // Driver code
// int main()
// {
// 	int a = 15, b = 20;
// 	cout << "LCM of " << a << " and " << b << " is "
// 		<< lcm(a, b);

// 	return 0;
// }

// Palindrome or not for a string.
// C++ implementation of the
// above approach
// #include <iostream>
// using namespace std;

// Function to check palindrome
// int checkPalindrome(string str)
// {
// 	// Calculating string length
// 	int len = str.length();

// 	// Traversing through the string
// 	// upto half its length
// 	for (int i = 0; i < len / 2; i++)
// 	{
// 		// Comparing i th character from
// 		// starting and len-i th character
// 		// from end
// 		if (str[i] != str[len - i - 1])
// 			return false;
// 	}

// 	// If the above loop doesn't return
// 	// then it is palindrome
// 	return true;
// }

// // Driver Code
// int main()
// {
// 	// Taking number as string
// 	string st =
// 	"112233445566778899000000998877665544332211";
// 	if (checkPalindrome(st) == true)
// 		cout << "Yes";
// 	else
// 		cout << "No";
// 	return 0;
// }
// // This code is written by vikkycirus
