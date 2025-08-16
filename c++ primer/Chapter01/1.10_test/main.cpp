#include <iostream>

int main()
{
    // for循环版本
    for (int num = 10; num >= 0; --num)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // while循环版本
    int num = 10;
    while (num >= 0)
    {
        std::cout << num << std::endl;
        --num;
    }

    return 0;
}