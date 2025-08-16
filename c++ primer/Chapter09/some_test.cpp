#include <iostream>
#include <array>
#include <vector>
int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::vector<int>::const_reference value = 10;
    for (const auto &elem : vec)
    {
        std::cout << elem << " ";
    }
    return 0;
}