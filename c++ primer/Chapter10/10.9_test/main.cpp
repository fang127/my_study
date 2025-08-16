#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void elimDups(std::vector<std::string> &vec)
{
    std::sort(vec.begin(), vec.end());
    auto unique_iterator = std::unique(vec.begin(), vec.end());
    vec.erase(unique_iterator, vec.end());
}

int main()
{
    std::vector<std::string> vec;
    std::string input;
    std::cout << "Enter numbers: ";
    while (std::cin >> input)
    {
        vec.push_back(input);
    }

    elimDups(vec);
    std::cout << "Unique numbers: ";
    for (const auto &num : vec)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}