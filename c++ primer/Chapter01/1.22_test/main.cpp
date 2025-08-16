#include <iostream>
#include <print>
#include "Sales_item.hpp"

int main()
{
    std::cout << "pease inout first book info:" << std::endl;
    Sales_item book01, book02;
    std::cin >> book01;
    std::cout << "pease inout second book info:" << std::endl;
    while (std::cin >> book02)
    {
        if (book01.isbn() == book02.isbn())
        {
            book01 += book02;
        }
        else
        {
            std::cerr << "Data must refer to same ISBN" << std::endl;
        }
    }
    std::cout << book01 << std::endl;

    system("pause");

    return 0;
}