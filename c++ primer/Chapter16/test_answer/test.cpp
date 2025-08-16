#include <iostream>
#include <string>
#include <vector>

template <typename T>
int compare(const T &a, const T &b)
{
    if (a < b)
        return -1;
    if (a > b)
        return 1;
    return 0;
}

template <typename IT>
auto func(IT beg, IT end) -> decltype(*beg + 0)
{
    return *beg;
}

template <typename T>
T &&func(T &&x)
{
    return x;
}

int main()
{
    std::cout << compare<std::string>("hello", "c++") << std::endl;

    std::vector<int> vec{1, 2, 3};
    // auto m = func(vec.begin(), vec.end()) = 42;
    std::cout << vec[0] << std::endl;

    int i = 5;
    auto j = func(std::move(i));

    return 0;
}