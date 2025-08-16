#include <iostream>
#include <vector>

std::vector<int>::const_iterator my_find(std::vector<int>::const_iterator beg, std::vector<int>::const_iterator end, int value)
{
    while (beg != end)
    {
        if (*beg == value)
        {
            return beg;
        }
        ++beg;
    }
    return beg; // return end if not found
}

int main()
{
    std::vector<int> vec;
    srand(static_cast<unsigned>(time(nullptr)));
    for (int i = 0; i < 100; ++i)
    {
        vec.push_back(rand() % 100);
    }
    auto it = my_find(vec.cbegin(), vec.cend(), 50);
    if (it == vec.cend())
    {
        std::cout << "Value not found." << std::endl;
    }
    else
    {
        std::cout << "Value found: ";
        std::cout << *it << std::endl;
    }

    return 0;
}