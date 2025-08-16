#include <iostream>
#include <list>
#include <algorithm>

int main()
{
    std::list<int> lst{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 22, 100, 2, 0, 20, 10, 30, 2, 3, 4, 5, 6, 7};
    auto pos = find_if(lst.crbegin(), lst.crend(),
                       [](int i)
                       {
                           return (i % 10) == 0;
                       });

    if (pos != lst.crend())
    {
        std::cout << "Found: " << *pos << '\n';
    }
    else
    {
        std::cout << "Not found\n";
    }

    return 0;
}