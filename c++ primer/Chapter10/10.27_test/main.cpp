#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 1, 2, 1, 3, 21, 3, 4, 5, 46, 2, 2, 3, 4, 5, 65};
    std::list<int> lst;
    std::sort(vec.begin(), vec.end());
    std::unique_copy(vec.begin(), vec.end(), std::back_inserter(lst));
    std::cout << "Unique elements copied to list: ";
    for (const auto &elem : lst)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    return 0;
}