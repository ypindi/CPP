#include <iostream>
#include <thread>
#include <mutex>

std::mutex myMutex;
int sharedCounter = 0;

void increment()
{
    for (int i = 0; i < 1000; ++i)
    {
        std::lock_guard<std::mutex> lock(myMutex); // automatic lock + unlock
        ++sharedCounter;
    }
}

int main()
{
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << "Final Counter: " << sharedCounter << "\n";
    return 0;
}

// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++> g++ -o .\44_threads_mutex.exe .\44_threads_mutex.cpp
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++> .\44_threads_mutex.exe
// Final Counter: 2000
// PS D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>