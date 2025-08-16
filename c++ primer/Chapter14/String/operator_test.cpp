#include <iostream>
#include "String.h"

int main()
{
    String str01("Hello, World!");
    std::cout << "Test operator<<:" << std::endl;
    std::cout << "String str01: " << str01 << std::endl;

    String str02("Hello, World!");
    std::cout << "Test operator==:" << std::endl;
    if (str01 == str02)
    {
        std::cout << "str01 is equal to str02" << std::endl;
    }
    else
    {
        std::cout << "str01 is not equal to str02" << std::endl;
    }

    std::cout << "Test operator!=:" << std::endl;
    if (str01 != str02)
    {
        std::cout << "str01 is not equal to str02" << std::endl;
    }
    else
    {
        std::cout << "str01 is equal to str02" << std::endl;
    }

    String str03("Hello, C++!");
    std::cout << "Test operator<:" << std::endl;
    if (str01 < str03)
    {
        std::cout << "str01 is less than str03" << std::endl;
    }
    else
    {
        std::cout << "str01 is not less than str03" << std::endl;
    }

    return 0;
}