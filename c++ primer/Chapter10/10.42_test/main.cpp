#include <iostream>
#include <list>
#include <string>
#include <algorithm>

void elimDups(std::list<std::string> &lst)
{
    lst.sort();
    lst.unique();
}

int main()
{
    std::list<std::string> lst;
    std::string input;
    std::cout << "Enter numbers: ";
    while (std::cin >> input)
    {
        lst.push_back(input);
    }

    elimDups(lst);
    std::cout << "Unique numbers: ";
    for (const auto &num : lst)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}