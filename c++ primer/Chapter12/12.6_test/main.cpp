#include <iostream>
#include <vector>
#include <initializer_list>
std::vector<int> *creat(const std::initializer_list<int> &il)
{
    auto *p = new std::vector<int>(il);
    return p;
}

void copy(std::vector<int> &vec, std::vector<int> *p)
{
    vec = *p;
    delete p;
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
    auto p = creat({1, 2, 3, 4, 5, 6, 8, 9, 0});
    copy(vec, p);
    print(vec);
    std::cout << std::endl;

    return 0;
}