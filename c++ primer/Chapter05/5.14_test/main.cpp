#include <iostream>
#include <string>

int main()
{
    std::string str01, str02, str03;
    int num = 1, v = 0;
    std::cout << "Enter first string: " << std::endl;
    if (std::cin >> str01)
    {
        std::cout << "Enter second string: " << std::endl;
        while (std::cin >> str02)
        {
            if (str02 == str01)
            {
                ++num;
                std::cout << "Enter next string: " << std::endl;
            }
            else
            {
                if (num > v)
                {
                    v = num;
                    str03 = str01;
                }
                // std::cout << str01 << " occurs " << num << " times." << std::endl;
                str01 = str02;
                num = 1;
            }
        }
    }
    else
    {
        std::cout << "Error reading input." << std::endl;
        return -1;
    }
    std::cout << str03 << " occurs most is " << v << std::endl;
    return 0;
}