#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>

int main()
{
    std::istream_iterator<int> in_iter(std::cin), end_iter;
    std::vector<int> v(in_iter, end_iter);
    for (auto i : v)
        std::cout << i << " ";
    std::cout << std::endl;
    std::cout << accumulate(in_iter, end_iter, 0) << std::endl;

    return 0;
}