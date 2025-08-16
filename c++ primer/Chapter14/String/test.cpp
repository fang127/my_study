#include <iostream>
#include "String.h"

int main()
{
    String str; // 默认构造函数调用
    str.push_back('H');
    str.push_back('e');
    str.push_back('l');
    str.push_back('l');
    str.push_back('o');

    std::cout << "String size: " << str.size() << std::endl;
    std::cout << "String capacity: " << str.capacity() << std::endl;

    for (char *p = str.begin(); p != str.end(); ++p)
    {
        std::cout << *p;
    }
    std::cout << std::endl;
    std::cout << "*************************" << std::endl;

    str.resize(10, 'x'); // 扩展字符串并填充新字符
    std::cout << "After resize to 10 with 'x': ";
    for (char *p = str.begin(); p != str.end(); ++p)
    {
        std::cout << *p;
    }
    std::cout << std::endl;
    std::cout << "String size after resize: " << str.size() << std::endl;
    std::cout << "String capacity after resize: " << str.capacity() << std::endl;
    std::cout << "*************************" << std::endl;

    String str2 = str; // 测试拷贝构造函数
    std::cout << "Copied string size: " << str2.size() << std::endl;
    std::cout << "Copied string capacity: " << str2.capacity() << std::endl;
    std::cout << "Copied string content: ";
    for (char *p = str2.begin(); p != str2.end(); ++p)
    {
        std::cout << *p;
    }
    std::cout << std::endl;
    std::cout << "*************************" << std::endl;

    str.clear(); // 清空字符串
    std::cout << "After clear, string size: " << str.size() << std::endl;
    std::cout << "After clear, string capacity: " << str.capacity() << std::endl;
    std::cout << "String content after clear: ";
    for (char *p = str.begin(); p != str.end(); ++p)
    {
        std::cout << *p;
    }
    std::cout << std::endl;
    std::cout << "*************************" << std::endl;

    str.reserve(20); // 预留空间
    std::cout << "After reserve(20), string capacity: " << str.capacity() << std::endl;
    std::cout << "String content after reserve: ";
    for (char *p = str.begin(); p != str.end(); ++p)
    {
        std::cout << *p;
    }
    std::cout << std::endl;
    std::cout << "*************************" << std::endl;

    str.push_back('W');
    str.push_back('o');
    str.push_back('r');
    str.push_back('l');
    str.push_back('d');
    std::cout << "After pushing 'World', string content: ";
    for (char *p = str.begin(); p != str.end(); ++p)
    {
        std::cout << *p;
    }
    std::cout << std::endl;
    std::cout << "String size after pushing: " << str.size() << std::endl;
    std::cout << "String capacity after pushing: " << str.capacity() << std::endl;
    std::cout << "*************************" << std::endl;
    str.resize(5); // 缩小字符串
    std::cout << "After resize to 5, string content: ";
    for (char *p = str.begin(); p != str.end(); ++p)
    {
        std::cout << *p;
    }
    std::cout << std::endl;
    std::cout << "String size after resize to 5: " << str.size() << std::endl;
    std::cout << "String capacity after resize to 5: " << str.capacity() << std::endl;

    String str3;
    str3 = str; // 测试赋值操作符
    std::cout << "Assigned string size: " << str3.size() << std::endl;
    std::cout << "Assigned string capacity: " << str3.capacity() << std::endl;
    std::cout << "Assigned string content: ";
    for (char *p = str3.begin(); p != str3.end(); ++p)
    {
        std::cout << *p;
    }
    std::cout << std::endl;
    std::cout << "*************************" << std::endl;

    return 0;
}