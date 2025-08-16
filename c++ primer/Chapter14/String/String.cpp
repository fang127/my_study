#include <iostream>
#include <cstring>
#include "String.h"

// 定义静态成员变量
std::allocator<char> String::allo;

String::String(const String &oth)
{
    auto data = allo_n_copy(oth.begin(), oth.end());
    this->beg = data.first;
    this->first_free = this->cap = data.second;
    std::cout << "String(const String &oth) called" << std::endl;
}

String::String(const char *ch)
{
    auto len = std::strlen(ch);
    auto data = allo.allocate(len + 1); // +1 for null terminator
    auto dest = data;
    for (size_t i = 0; i < len; ++i)
    {
        allo.construct(dest++, ch[i]);
    }
    allo.construct(dest++, '\0'); // Null terminator
    this->beg = data;
    this->first_free = this->cap = dest; // +1 for null terminator
}

// 移动构造函数
String::String(String &&oth) noexcept : beg(oth.beg), first_free(oth.first_free), cap(oth.cap)
{
    oth.beg = nullptr;
    oth.first_free = nullptr;
    oth.cap = nullptr;
    std::cout << "String(String &&oth) called" << std::endl;
}

// 移动赋值运算符
String &String::operator=(String &&s) noexcept
{
    if (this != &s) // 防止自赋值
    {
        this->free();      // 释放当前对象的资源
        this->beg = s.beg; // 转移资源
        this->first_free = s.first_free;
        this->cap = s.cap;
        s.beg = nullptr; // 清空源对象的资源
        s.first_free = nullptr;
        s.cap = nullptr;
    }
    std::cout << "String &operator=(String &&s) called" << std::endl;
    return *this;
}

String &String::operator=(const String &s)
{
    auto data = allo_n_copy(s.begin(), s.end());
    this->free();
    this->beg = data.first;
    this->first_free = this->cap = data.second;
    std::cout << "String &operator=(const String &s) called" << std::endl;
    return *this;
}

String::~String()
{
    this->free();
}

size_t String::size() const
{
    return this->first_free - this->beg;
}

size_t String::capacity() const
{
    return this->cap - this->beg;
}

void String::push_back(const char ch)
{
    this->check();
    allo.construct(this->first_free++, ch);
}

void String::reserve(size_t n)
{
    if (n > this->capacity())
        this->reallocate(n);
}

void String::resize(size_t n)
{
    this->resize(n, '\0');
}

void String::resize(size_t n, char ch)
{
    if (n > this->size())
    {
        if (n > this->capacity())
        {
            this->reallocate(n);
            while (this->first_free != this->beg + n)
            {
                allo.construct(this->first_free++, ch);
            }
        }
        else
        {
            while (this->first_free != this->beg + n)
            {
                allo.construct(this->first_free++, ch);
            }
        }
    }
    else
    {
        while (this->first_free > this->beg + n)
        {
            allo.destroy(--this->first_free);
        }
    }
}

char *String::begin()
{
    return this->beg;
}

char *String::end()
{
    return this->first_free;
}

char *String::begin() const
{
    return this->beg;
}

char *String::end() const
{
    return this->first_free;
}

void String::clear()
{
    if (this->beg)
    {
        while (this->beg != this->first_free)
        {
            allo.destroy(--this->first_free);
        }
    }
}

const char &String::operator[](size_t n) const
{
    if (n >= this->size())
    {
        throw std::out_of_range("out of range");
    }
    return *(this->beg + n);
}

char &String::operator[](size_t n)
{
    if (n >= this->size())
    {
        throw std::out_of_range("out of range");
    }
    return *(this->beg + n);
}

/*



private



*/
void String::reallocate()
{
    auto newcapacity = this->size() ? 2 * this->size() : 1;
    auto newdata = this->allo.allocate(newcapacity);
    auto dest = newdata;     // Pointer to the new data area
    auto oldbeg = this->beg; // Save the old beginning pointer
    // auto newend = std::uninitialized_copy(oldbeg, this->first_free, dest); // Copy old data to new area
    for (size_t i = 0; i != this->size(); ++i)
    {
        allo.construct(dest++, std::move(*oldbeg++));
    }
    this->free();                      // Free the old data
    this->beg = newdata;               // Update the beginning pointer
    this->first_free = dest;           // Update the end pointer
    this->cap = newdata + newcapacity; // Update the capacity pointer
}

void String::reallocate(size_t n)
{
    auto newcap = this->allo.allocate(n);
    auto dest = newcap;      // Pointer to the new data area
    auto oldbeg = this->beg; // Save the old beginning pointer
    // auto newend = std::uninitialized_copy(this->beg, this->first_free, newcap);
    for (size_t i = 0; i != this->size(); ++i)
    {
        allo.construct(dest++, std::move(*oldbeg++));
    }
    this->free();
    this->beg = newcap;
    this->first_free = dest;
    this->cap = newcap + n;
}

std::pair<char *, char *> String::allo_n_copy(char *b, char *e)
{
    auto data = allo.allocate(e - b);
    return {data, std::uninitialized_copy(b, e, data)};
}

void String::free()
{
    if (this->beg)
    {
        while (beg != this->first_free)
        {
            allo.destroy(--this->first_free);
        }
        allo.deallocate(this->beg, this->capacity());
        this->beg = nullptr;
        this->first_free = nullptr;
        this->cap = nullptr;
    }
}

void String::check()
{
    if (this->first_free == this->cap)
    {
        this->reallocate();
    }
}

/*



非成员函数接口




*/
// 输出字符串内容
std::ostream &operator<<(std::ostream &io, const String &ths)
{
    for (auto it = ths.begin(); it != ths.end(); ++it)
    {
        io << *it;
    }
    return io;
}

bool operator==(const String &lhs, const String &rhs)
{
    if (lhs.size() != rhs.size())
        return false;
    for (size_t i = 0; i < lhs.size(); ++i)
    {
        if (lhs.beg[i] != rhs.beg[i])
            return false;
    }
    return true;
}

bool operator!=(const String &lhs, const String &rhs)
{
    return !(lhs == rhs); // 使用==运算符的结果
}

bool operator<(const String &lhs, const String &rhs)
{
    size_t min_size = std::min(lhs.size(), rhs.size());
    for (size_t i = 0; i < min_size; ++i)
    {
        if (lhs.beg[i] < rhs.beg[i])
            return true;
        if (lhs.beg[i] > rhs.beg[i])
            return false;
    }
    return lhs.size() < rhs.size(); // 如果前面的字符相同，则比较长度
}