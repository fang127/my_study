#include <iostream>
#include <list>
#include <deque>

int main()
{
    std::deque<int> deq{1, 2, 3, 4, 5};
    std::list<std::deque<int>> lst{deq};
    for (const auto &i : lst)
        for (const auto &j : i)
            std::cout << j << " ";
    std::cout << std::endl;

    return 0;
}