#include <iostream>
#include <list>
#include <string>

int main()
{
    std::list<std::string> lst;
    std::cout << "Enter strings:" << "\n";
    std::string word;
    while (std::cin >> word)
        lst.push_back(word);

    std::cout << "********************" << "\n";
    for (auto beg = lst.cbegin(); beg != lst.cend(); ++beg)
        std::cout << *beg << " ";
    std::cout << "\n";

    return 0;
}