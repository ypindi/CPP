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
    return 0;
}
