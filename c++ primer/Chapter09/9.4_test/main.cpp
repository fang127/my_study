#include <iostream>
#include <vector>

bool my_find(std::vector<int>::const_iterator beg, std::vector<int>::const_iterator end, int value)
{
    while (beg != end)
    {
        if (*beg == value)
        {
            return true;
        }
        ++beg;
    }
    return false;
}

int main()
{
    std::vector<int> vec;
    srand(static_cast<unsigned>(time(nullptr)));
    for (int i = 0; i < 100; ++i)
    {
        vec.push_back(rand() % 100);
    }
    bool status = my_find(vec.cbegin(), vec.cend(), 50);
    std::cout << "50 is " << (status ? "found" : "not found") << " in the vector." << std::endl;
    return 0;
}