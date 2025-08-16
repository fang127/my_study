#include <iostream>
#include <utility>
#include <vector>
#include <string>

int main()
{
    std::string word;
    int num;
    std::cout << "Enter one string and one number:" << std::endl;
    std::vector<std::pair<std::string, int>> vec;
    while (std::cin >> word >> num)
    {
        if (!word.empty() && std::cin.good())
            vec.push_back(make_pair(word, num));
    }

    for (const auto &i : vec)
    {
        std::cout << i.first << "\t" << i.second << "\n";
    }

    return 0;
}