#include <string>
#include <iostream>
#include <vector>

std::vector<std::string::size_type> my_find(const std::string &s)
{
    std::vector<std::string::size_type> result;
    std::string::size_type beg = 0;
    while (beg < s.size())
    {
        // std::string::size_type pos = s.find_first_of("0123456789", beg); // 查找第一个数字字符的位置
        std::string::size_type pos = s.find_first_not_of("0123456789", beg); // 查找第一个非数字字符的位置
        if (pos != std::string::npos)
        {
            result.push_back(pos);
            beg = pos + 1; // 从找到的位置的下一个字符开始继续查找
        }
        else
        {
            break; // 没有找到更多数字，退出循环
        }
    }
    return result;
}

int main()
{
    std::string s{"ab2c3d7R4E6"};
    std::vector<std::string::size_type> result;
    result = my_find(s);
    for (auto pos : result)
    {
        std::cout << pos << " ";
    }
    std::cout << std::endl;
    return 0;
}