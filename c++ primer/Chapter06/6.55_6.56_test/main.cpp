#include <iostream>
#include <vector>

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}

int main()
{
    std::vector<int (*)(int, int)> vec;
    vec.push_back(add);
    vec.push_back(subtract);
    vec.push_back(multiply);
    vec.push_back(divide);

    for (auto func : vec)
    {
        std::cout << "Result: " << func(10, 5) << std::endl;
    }

    return 0;
}