#include <iostream>
#include <list>
#include <vector>
#include <string>

int main()
{
    std::list<const char *> lst{"hello", "world", "!"}; // 字符串字面值是常量字符构成的数组，类型是const char[],所以对应指针应该是const char*
    std::vector<std::string> vec{"c++", "primer", "!"};
    vec.assign(lst.begin(), lst.end());
    for (const auto &i : vec)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}