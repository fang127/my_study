#include <iostream>
#include <list>
#include <vector>

int main()
{
    std::list<int> lst{1, 2, 3, 4, 5};
    std::vector<int> vec01{9, 8, 7, 6, 5};
    // 从list初始化vector
    std::vector<double> vec02(lst.begin(), lst.end());
    for (const auto &elem : vec02)
    {
        std::cout << elem << " ";
    }
    std::cout << "**************************" << "\n";
    // 从vector<int>初始化vector<double>
    std::vector<double> vec03(vec01.begin(), vec01.end());
    for (const auto &elem : vec03)
    {
        std::cout << elem << " ";
    }
    return 0;
}