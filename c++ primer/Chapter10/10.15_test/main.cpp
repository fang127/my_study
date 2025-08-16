#include <iostream>
#include <vector>
#include <algorithm>

void print(const std::vector<int> &vec)
{
    for (const auto &elem : vec)
    {
        auto f = [elem](int x)
        { return elem + x; };
        std::cout << f(10) << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    print(numbers);

    return 0;
}