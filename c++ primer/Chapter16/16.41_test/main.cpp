#include <iostream>
#include <type_traits>
#include <utility>

template <typename T1, typename T2>
auto sum(const T1 &lval, const T2 &rval) -> decltype(lval + rval)
{
    return lval + rval; // 直接返回值，不需要 std::move
}

int main()
{
    int x = 5;
    double y = 3.14;
    auto result = sum(x, y);
    std::cout << "Sum: " << result << std::endl; // 输出：Sum: 8.14
    return 0;
}