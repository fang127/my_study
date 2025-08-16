#include <iostream>

int main()
{
    auto f = [](int x, int y)
    { return x + y; };
    std::cout << f(10, 20) << std::endl;
    return 0;
}