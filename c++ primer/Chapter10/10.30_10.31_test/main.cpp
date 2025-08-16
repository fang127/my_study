#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

int main()
{
    std::cout << "Enter some numbers (end with 0): ";
    std::istream_iterator<int> begin(std::cin), end;

    // 先将数据读取到vector中
    std::vector<int> numbers(begin, end);

    // 对vector进行排序
    std::sort(numbers.begin(), numbers.end());

    // 输出排序后的结果
    // std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));
    std::unique_copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}