#include <iostream>
#include <algorithm>

int main()
{
    int ia[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::fill_n(std::begin(ia), sizeof(ia) / sizeof(*ia), 0);
    for (auto i : ia)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}