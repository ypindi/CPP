#include <iostream>
#include <vector>
#include <map>

void findFrequency(const std::vector<int> &vec)
{
    std::map<int, int> freqMap;

    for (int num : vec)
    {
        freqMap[num]++;
    }

    for (const auto &pair : freqMap)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

int main()
{
    std::vector<int> numbers = {1, 2, 2, 3, 3, 3, 4};
    findFrequency(numbers);
    numbers.push_back(5);
    findFrequency(numbers);
    return 0;
}

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>g++ -o 41_map_count.exe 41_map_count.cpp

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>41_map_count.exe
// 1: 1
// 2: 2
// 3: 3
// 4: 1
// 1: 1
// 2: 2
// 3: 3
// 4: 1
// 5: 1

// D:\Yashwanth\HTW_Berlin\Self_Learnings\C++>