#include <vector>
#include <iostream>
#include <algorithm>
#include <list>

int main()
{
    std::vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    std::list<int> lst;
    std::copy_if(vec.rbegin(), vec.rend(), back_inserter(lst),
                 [](int i)
                 {
                     return i >= 3 && i <= 7;
                 });

    for_each(lst.cbegin(), lst.cend(),
             [](int i)
             {
                 std::cout << i << " ";
             });

    return 0;
}