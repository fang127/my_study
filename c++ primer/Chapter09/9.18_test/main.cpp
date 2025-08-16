#include <iostream>
#include <deque>
#include <string>

int main()
{
    std::deque<std::string> deq;
    std::cout << "Enter strings:" << "\n";
    std::string word;
    while (std::cin >> word)
        deq.push_back(word);

    std::cout << "********************" << "\n";
    for (auto beg = deq.cbegin(); beg != deq.cend(); ++beg)
        std::cout << *beg << " ";
    std::cout << "\n";

    return 0;
}