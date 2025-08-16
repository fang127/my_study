#include <iostream>
#include "StrVec.h"

int main()
{
    StrVec v1{"hello", "world", "this", "is", "a", "test"};
    StrVec v2{"another", "test", "for", "StrVec"};

    std::cout << "Test operator==:" << std::endl;
    if (v1 == v2)
    {
        std::cout << "v1 and v2 are equal." << std::endl;
    }
    else
    {
        std::cout << "v1 and v2 are not equal." << std::endl;
    }

    std::cout << "Test operator!=:" << std::endl;
    if (v1 != v2)
    {
        std::cout << "v1 and v2 are not equal." << std::endl;
    }
    else
    {
        std::cout << "v1 and v2 are equal." << std::endl;
    }

    std::cout << "Test operator<:" << std::endl;
    if (v1 < v2)
    {
        std::cout << "v1 is less than v2." << std::endl;
    }
    else
    {
        std::cout << "v1 is not less than v2." << std::endl;
    }

    v2 = {"hello", "world"};
    for (auto beg = v2.begin(); beg != v2.end(); ++beg)
    {
        std::cout << *beg << " ";
    }
    std::cout << std::endl;

    std::cout << "Test operator[]:" << v2[0] << std::endl;

    return 0;
}