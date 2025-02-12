#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int balance = 0;

void deposit(int value)
{
    balance += value;
}

void withdraw(int value)
{
    balance -= value;
}

std::mutex mtx;
void safeDeposit(int value)
{
    lock_guard<mutex> lock(mtx);
    balance += value;
}

mutex mtx2;
void safeWithdraw(int value)
{
    lock_guard<mutex> lock(mtx2);
    balance -= value;
}

// using threads might not always work properly.
int main()
{
    cout << "Balance before: " << balance << endl;
    thread t1(deposit, 100);
    thread t2(withdraw, 50);
    t1.join();
    t2.join();
    cout << "Balance after: " << balance << endl;
    cout << endl
         << "Now using Mutex" << endl;
    thread t3(safeDeposit, 500);
    thread t4(safeWithdraw, 100);
    t3.join();
    // t4.join();
    if (t4.joinable())
    {
        t4.join();
    }
    cout << "Balance using safe threads operation to access resources: " << balance << endl;
    return 0;
}

// The "Balance after: 50" reflects the unsafe operations
// with race conditions.
// The "Balance using safe threads operation to access
// resources: 400" ensures correctness due to mutex protection.

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\Diehl> g++ -o .\4_mutexLocks.exe .\4_mutexLocks.cpp
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\Diehl> .\4_mutexLocks.exe
// Balance before: 0
// Balance after: 50

// Now using Mutex
// Balance using safe threads operation to access resources: 450
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++\Diehl>
