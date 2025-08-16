#include <iostream>

size_t count_calls()
{
    static size_t count = 0;
    return ++count;
}
int main()
{
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Function called " << count_calls() << " times." << std::endl;
    }
    return 0;
}