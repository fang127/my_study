#include <iostream>

int main()
{
    int i = 0;
    int *j = &i;
    std::cout << "j = " << j << "   j的地址 = " << &j << "   i的地址 = " << &i << "   i = " << i << std::endl;
    *j = 1;
    std::cout << "j = " << j << "   j的地址 = " << &j << "   i的地址 = " << &i << "   i = " << i << std::endl;
    int a = 10;
    j = &a;
    std::cout << "j = " << j << "   j的地址 = " << &j << "   a的地址 = " << &a << "   *j = " << *j << std::endl;

    return 0;
}