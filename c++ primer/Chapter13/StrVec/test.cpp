#include <iostream>
#include "StrVec.h"

int main()
{
    StrVec v1;
    std::string word;
    while (std::cin >> word)
    {
        v1.push_back(word);
        std::cout << "size: " << v1.size() << ", capacity: " << v1.capacity() << std::endl;
    }
    for (auto beg = v1.begin(); beg != v1.end(); ++beg)
    {
        std::cout << *beg << " ";
    }
    std::cout << std::endl;
    std::cout << "*********************************" << std::endl;
    StrVec v2 = v1; // 测试拷贝构造函数
    for (auto beg = v2.begin(); beg != v2.end(); ++beg)
    {
        std::cout << *beg << " ";
    }
    std::cout << std::endl;
    std::cout << "*********************************" << std::endl;

    StrVec v3;
    v3 = v1; // 测试赋值运算符
    for (auto beg = v3.begin(); beg != v3.end(); ++beg)
    {
        std::cout << *beg << " ";
    }
    std::cout << std::endl;
    std::cout << "*********************************" << std::endl;
    v3.resize(10, "hello"); // 测试resize函数
    for (auto beg = v3.begin(); beg != v3.end(); ++beg)
    {
        std::cout << *beg << " ";
    }
    std::cout << std::endl;
    std::cout << "*********************************" << std::endl;

    v3.resize(5, "world"); // 测试resize函数
    for (auto beg = v3.begin(); beg != v3.end(); ++beg)
    {
        std::cout << *beg << " ";
    }
    std::cout << std::endl;
    std::cout << "*********************************" << std::endl;

    v3.reserve(20); // 测试reserve函数
    std::cout << "After reserve, size: " << v3.size() << ",capacity: " << v3.capacity() << std::endl;
    for (auto beg = v3.begin(); beg != v3.end(); ++beg)
    {
        std::cout << *beg << " ";
    }
    std::cout << std::endl;
    std::cout << "*********************************" << std::endl;

    v3.push_back("new_word"); // 测试push_back函数
    std::cout << "After push_back, size: " << v3.size() << ", capacity: " << v3.capacity() << std::endl;
    for (auto beg = v3.begin(); beg != v3.end(); ++beg)
    {
        std::cout << *beg << " ";
    }
    std::cout << std::endl;
    std::cout << "*********************************" << std::endl;

    StrVec v4 = {"one", "two", "three"}; // 测试初始化列表构造函数
    for (auto beg = v4.begin(); beg != v4.end(); ++beg)
    {
        std::cout << *beg << " ";
    }
    std::cout << std::endl;
    std::cout << "*********************************" << std::endl;

    return 0;
}