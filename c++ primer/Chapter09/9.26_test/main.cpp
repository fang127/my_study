#include <iostream>
#include <list>
#include <vector>

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    std::vector<int> vec(std::begin(ia), std::end(ia));
    std::list<int> lst(std::begin(ia), std::end(ia));
    for (auto i = lst.begin(); i != lst.end();)
    {
        if (*i % 2 != 0)
        {
            i = lst.erase(i); // erase返回下一个有效迭代器
        }
        else
        {
            ++i;
        }
    }
    std::cout << "List after removing odd elements: ";
    for (const auto &elem : lst)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;

    for (auto i = vec.begin(); i != vec.end();)
    {
        if (*i % 2 == 0)
        {
            i = vec.erase(i); // erase返回下一个有效迭代器
        }
        else
        {
            ++i;
        }
    }
    std::cout << "Vector after removing even elements: ";
    for (const auto &elem : vec)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;

    return 0;
}