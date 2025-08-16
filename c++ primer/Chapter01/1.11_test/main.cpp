#include <iostream>

int main()
{
    std::cout << "Please give two numbers:" << std::endl;
    int num1 = 0,num2 = 0;
    std::cin >> num1 >> num2;
    for(int i = 0;i<=abs(num1 - num2);++i)
    {
        std::cout << std::min(num1,num2) + i << " ";
    }
    std::cout << std::endl;

    return 0;
}