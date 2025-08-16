#include <iostream>
#include <list>
#include <deque>

int main()
{
    std::list<int> lst;
    int num = 0;
    while (std::cin >> num)
        lst.push_back(num);
    std::deque<int> deq01;
    std::deque<int> deq02;
    for (auto beg = lst.cbegin(); beg != lst.cend(); ++beg)
    {
        if (*beg % 2 == 0)
            deq01.push_back(*beg);
        else
            deq02.push_back(*beg);
    }

    std::cout << "结果为:" << "\n";
    std::cout << "偶数:";
    for (const auto &elem : deq01)
        std::cout << elem << " ";
    std::cout << "\n奇数:";
    for (const auto &elem : deq02)
        std::cout << elem << " ";
    std::cout << std::endl;

    return 0;
}