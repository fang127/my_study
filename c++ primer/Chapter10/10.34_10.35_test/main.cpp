#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // reverse_iterator
    for_each(vec.crbegin(), vec.crend(),
             [](int i)
             {
                 std::cout << i << " ";
             });
    std::cout << "\n";

    // iterator
    for (auto iter = vec.cend(); iter != vec.cbegin();)
        std::cout << *(--iter) << " ";
    std::cout << "\n";

    return 0;
}