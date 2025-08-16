#include "Chapter6.h"
#include <iostream>

int main()
{
    std::cout << "Enter a number to calculate its factorial: ";
    int number = 0;
    std::cin >> number;
    int j = fact(number);
    std::cout << "The factorial of " << number << " is: " << j << std::endl;
    return 0;
}