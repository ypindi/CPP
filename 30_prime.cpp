#include <iostream>
using namespace std;

class Prime
{
    int range1, range2, count, arr[];

public:
    Prime(int r1, int r2) : range1(r1), range2(r2)
    {
        cout << "Constructor called" << endl;
    }
    ~Prime()
    {
        cout << "Destructor called" << endl;
    }
    void findAllPrime()
    {
        for (int i = range1; i <= range2; ++i)
        {
            int cnt = 0;
            for (int j = 2; j * j <= i; ++j)
            {
                if (i % j == 0)
                {
                    cnt++;
                }
            }
            cout << "cnt value for " << i << "is " << cnt << endl;
            if (cnt > 0)
            {
                continue;
            }
            else
            {
                cout << "Prime number is                       " << i << endl;
            }
        }
    }
};

int main()
{
    Prime value(10, 20);
    value.findAllPrime();
    return 0;
}

// Using Arrays
// #include <iostream>

// // Function to check if a number is prime
// bool isPrime(int num) {
//     if (num <= 1) return false;
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int primes[25];  // Array to store prime numbers up to 100
//     int count = 0;   // Counter to keep track of the number of primes found

//     // Loop through numbers from 2 to 100
//     for (int i = 2; i <= 100; i++) {
//         if (isPrime(i)) {
//             primes[count] = i;  // Add the prime number to the array
//             count++;             // Increment the count of primes found
//         }
//     }

//     // Display all prime numbers
//     std::cout << "Prime numbers up to 100:" << std::endl;
//     for (int i = 0; i < count; i++) {
//         std::cout << primes[i] << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

// Vector<int> - important
// #include <iostream>
// #include <vector>

// // Function to check if a number is prime
// bool isPrime(int num) {
//     if (num <= 1) return false;
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     std::vector<int> primes;  // Vector to store prime numbers

//     // Loop through numbers from 2 to 100
//     for (int i = 2; i <= 100; i++) {
//         if (isPrime(i)) {
//             primes.push_back(i);  // Append prime number to the vector
//         }
//     }

//     // Display all prime numbers
//     std::cout << "Prime numbers up to 100:" << std::endl;
//     for (int prime : primes) {
//         std::cout << prime << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }
