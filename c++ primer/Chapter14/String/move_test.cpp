#include <iostream>
#include "String.h"

String createString()
{
    String temp;
    temp.push_back('H');
    temp.push_back('i');
    std::cout << &temp << std::endl; // 输出临时对象的地址
    return temp;                     // 这里会触发移动构造函数
}

int main()
{
    std::cout << "=== 测试移动构造函数 ===" << std::endl;

    // 创建一个字符串
    String str1;
    str1.push_back('A');
    str1.push_back('B');
    str1.push_back('C');

    std::cout << "原始字符串内容: ";
    for (char *p = str1.begin(); p != str1.end(); ++p)
    {
        std::cout << *p;
    }
    std::cout << ", 大小: " << str1.size() << ", 容量: " << str1.capacity() << std::endl;

    // 移动构造
    String str2 = std::move(str1);

    std::cout << "移动后，新字符串内容: ";
    for (char *p = str2.begin(); p != str2.end(); ++p)
    {
        std::cout << *p;
    }
    std::cout << ", 大小: " << str2.size() << ", 容量: " << str2.capacity() << std::endl;

    std::cout << "移动后，原字符串大小: " << str1.size() << ", 容量: " << str1.capacity() << std::endl;

    std::cout << "\n=== 测试移动赋值运算符 ===" << std::endl;

    String str3;
    str3.push_back('X');
    str3.push_back('Y');
    str3.push_back('Z');

    std::cout << "赋值前，str3内容: ";
    for (char *p = str3.begin(); p != str3.end(); ++p)
    {
        std::cout << *p;
    }
    std::cout << ", 大小: " << str3.size() << ", 容量: " << str3.capacity() << std::endl;

    String str4;
    str4.push_back('1');
    str4.push_back('2');
    str4.push_back('3');
    str4.push_back('4');

    std::cout << "赋值前，str4内容: ";
    for (char *p = str4.begin(); p != str4.end(); ++p)
    {
        std::cout << *p;
    }
    std::cout << ", 大小: " << str4.size() << ", 容量: " << str4.capacity() << std::endl;

    // 移动赋值
    str3 = std::move(str4);

    std::cout << "移动赋值后，str3内容: ";
    for (char *p = str3.begin(); p != str3.end(); ++p)
    {
        std::cout << *p;
    }
    std::cout << ", 大小: " << str3.size() << ", 容量: " << str3.capacity() << std::endl;

    std::cout << "移动赋值后，str4大小: " << str4.size() << ", 容量: " << str4.capacity() << std::endl;

    std::cout << "\n=== 测试返回值优化 ===" << std::endl;
    String str5 = createString();
    std::cout << &str5 << std::endl; // 输出返回值的地址
    std::cout << "从函数返回的字符串内容: ";
    for (char *p = str5.begin(); p != str5.end(); ++p)
    {
        std::cout << *p;
    }
    std::cout << ", 大小: " << str5.size() << ", 容量: " << str5.capacity() << std::endl;

    return 0;
}
