#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
void my_equal(const std::vector<T> &vec, const std::list<T> &lst)
{
    if (vec.size() != lst.size())
    {
        if (vec.size() < lst.size())
        {
            std::cout << "Vector is smaller than list." << std::endl;
            return;
        }
        else
        {
            std::cout << "Vector is larger than list." << std::endl;
            return;
        }
    }
    else
    {
        for (auto vit = vec.cbegin(), lit = lst.cbegin(); vit != vec.cend() && lit != lst.cend(); ++vit, ++lit)
        {
            if (*vit == *lit)
            {
                continue;
            }
            else if (*vit < *lit)
            {
                std::cout << "Vector is less than list." << std::endl;
                return;
            }
            else
            {
                std::cout << "Vector is greater than list element." << std::endl;
                return;
            }
        }
        std::cout << "Vector is equal to list." << std::endl;
    }
}

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<int> lst01(vec.begin(), vec.end());
    std::list<int> lst02{1, 2, 3};
    std::list<int> lst03{1, 2, 3, 4, 5, 6};
    std::list<int> lst04{1, 2, 3, 4, 6};
    std::list<int> lst05{1, 2, 3, 3, 6};
    my_equal(vec, lst01);
    my_equal(vec, lst02);
    my_equal(vec, lst03);
    my_equal(vec, lst04);
    my_equal(vec, lst05);

    return 0;
}