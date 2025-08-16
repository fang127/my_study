#include <iostream>
#include <string>

int main()
{
    std::string str01, str02;
    std::cout << "Enter string:" << std::endl;
    bool status = false;

    while (std::cin >> str01)
    {

        if (str01 == str02)
        {
            status = true;
            std::cout << "The strings are equal." << std::endl;
            break;
        }
        else
        {
            str02 = str01;
        }
    }
    if (!status)
    {
        std::cout << "The strings are not equal." << std::endl;
    }
    return 0;
}