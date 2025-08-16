#include "HasPtr.h"

HasPtr &HasPtr::operator=(const HasPtr &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    // Check for self-assignment
    auto temp = new std::string(*rhs.ps);
    delete this->ps;
    this->ps = temp;
    this->i = rhs.i;

    return *this;
}

HasPtr::HasPtr(HasPtr &&hp) noexcept : ps(hp.ps), i(hp.i)
{
    std::cout << "Move constructor called" << std::endl;
    hp.ps = nullptr; // 将源对象的指针置为 nullptr，避免析构时删除
    hp.i = 0;        // 重置源对象的整数值
}

HasPtr &HasPtr::operator=(HasPtr &&rhs) noexcept
{
    std::cout << "Move assignment operator called" << std::endl;
    // 直接检测自赋值
    if (this != &rhs)
    {
        delete ps;        // 释放旧 string
        ps = rhs.ps;      // 从 rhs 接管 string
        i = rhs.i;        // 复制整数
        rhs.ps = nullptr; // 将 rhs 置于可析构状态
        rhs.i = 0;
    }
    return *this;
}