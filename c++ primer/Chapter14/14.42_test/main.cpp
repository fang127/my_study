#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>
using namespace std::placeholders;

int main()
{
    std::vector<int> v{100000, 1000, 2222, 3333, 1023, 3044};
    std::vector<std::string> str{"pooh", "pooh", "pooh", "hello", "world"};
    // 统计大于1024个数
    int count = std::count_if(v.begin(), v.end(), std::bind(std::greater<int>(), _1, 1024));
    std::cout << "greater 1024 has : " << count << std::endl;

    // 找到第一个不等于pooh
    auto iter = std::find_if(str.begin(), str.end(), std::bind(std::not_equal_to<std::string>(), _1, "pooh"));
    std::cout << "first not equal to pooh is : " << *iter << std::endl;

    // 所有数值乘2
    std::transform(v.begin(), v.end(), v.begin(), std::bind(std::multiplies<int>(), _1, 2));
    std::transform(str.begin(), str.end(), str.begin(), std::bind(std::plus<std::string>(), _1, _1));
    for (const auto &i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    for (const auto &i : str)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}