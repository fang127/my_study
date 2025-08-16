#include <iostream>

int abs(int val)
{
    return val < 0 ? -val : val;
}

int main()
{
    int i = 0;
    std::cout << "Enter a number: ";
    std::cin >> i;
    int j = abs(i);
    std::cout << "abs(" << i << ") = " << j << std::endl;
    return 0;
}