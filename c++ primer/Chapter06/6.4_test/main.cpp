#include <iostream>

int fact(int val)
{
    int ret = 1;
    while (val > 1)
        ret *= val--;
    return ret;
}

int main()
{
    int i = 0;
    std::cout << "Enter a number: ";
    std::cin >> i;
    int j = fact(i);
    std::cout << i << "! = " << j << std::endl;
    return 0;
}