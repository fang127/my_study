#include <vector>
#include <iostream>
#include "String.h"

int main()
{
    std::vector<String> vec;
    String str;

    for (int i = 0; i < 5; ++i)
    {
        vec.push_back(str); // 使用拷贝构造函数
    }
    std::cout << "***********************" << std::endl;
    vec.push_back(std::move(str)); // 使用移动构造函数
    vec.push_back(String());       // 使用移动构造函数
    vec.push_back(str);            // 使用拷贝构造函数

    return 0;
}