#include <iostream>
#include <vector>
#include <list>

template <typename T1, typename T2>
auto find(const T1 &beg, const T1 &end, const T2 &value) -> T1
{
    for (auto it = beg; it != end; ++it)
    {
        if (*it == value)
        {
            return it;
        }
    }
    return end;
}

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<int> lst{1, 2, 3, 4, 5};
    auto vec_it = find(vec.begin(), vec.end(), 3);
    auto lst_it = find(lst.begin(), lst.end(), 3);
    if (vec_it != vec.end())
    {
        std::cout << "Found in vector: " << *vec_it << std::endl;
    }
    else
    {
        std::cout << "Not found in vector." << std::endl;
    }
    if (lst_it != lst.end())
    {
        std::cout << "Found in list: " << *lst_it << std::endl;
    }
    else
    {
        std::cout << "Not found in list." << std::endl;
    }

    return 0;
}