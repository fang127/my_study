#include <iostream>
#include <vector>
#include <initializer_list>
#include <memory>

std::shared_ptr<std::vector<int>> creat(const std::initializer_list<int> &il)
{
    std::shared_ptr<std::vector<int>> sp(new std::vector<int>(il));
    return sp;
}

void copy(std::vector<int> &vec, std::shared_ptr<std::vector<int>> p)
{
    vec = *p;
}

void print(const std::vector<int> &vec)
{
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
}

int main()
{
    std::vector<int> vec;
    copy(vec, creat({1, 2, 3, 4, 5, 6, 8, 9, 0}));
    print(vec);
    std::cout << std::endl;

    return 0;
}