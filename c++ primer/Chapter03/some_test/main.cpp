#include <iostream>

int main()
{
    std::string str;
    while (getline(std::cin, str))
        if (!str.empty())
            std::cout << str << "\t" << str.size() << std::endl;

    return 0;
}