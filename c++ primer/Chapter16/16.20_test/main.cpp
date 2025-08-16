#include <iostream>
#include <vector>

template <typename Container>
std::ostream &print(const Container &ths, std::ostream &os = std::cout)
{
    for (auto beg = ths.begin(); beg != ths.end(); ++beg)
    {
        os << *beg << " ";
    }
    return os;
}

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print(vec);

    return 0;
}