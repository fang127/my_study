#include <iostream>

int main()
{
    std::string str1, str2;
    std::cout << "�������һ���ַ���" << std::endl;
    getline(std::cin, str1);
    std::cout << "������ڶ����ַ���" << std::endl;
    getline(std::cin, str2);
    if (str1 != str2)
        if (str1 > str2)
            std::cout << str1 << std::endl;
        else
            std::cout << str2 << std::endl;
    else
        std::cout << "str1 = str2" << std::endl;

    std::cout << "**************" << std::endl;

    if (str1.size() != str2.size())
        if (str1.size() > str2.size())
            std::cout << str1 << std::endl;
        else
            std::cout << str2 << std::endl;
    else
        std::cout << "str1.size() = str2.size()" << std::endl;

    return 0;
}