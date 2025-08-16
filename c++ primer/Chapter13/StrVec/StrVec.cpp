#include <algorithm>
#include "StrVec.h"

// 定义静态成员变量
std::allocator<std::string> StrVec::allo;

StrVec::StrVec(const StrVec &oth)
{
    auto data = allo_n_copy(oth.begin(), oth.end());
    this->elements = data.first;
    this->first_free = this->cap = data.second;
}

StrVec::StrVec(StrVec &&oth) noexcept : elements(oth.elements), first_free(oth.first_free), cap(oth.cap)
{
    // 将 oth 的指针置空，避免析构时释放资源
    oth.elements = oth.first_free = oth.cap = nullptr;
}

StrVec &StrVec::operator=(StrVec &&oth) noexcept
{
    if (this != &oth) // 防止自赋值
    {
        this->free(); // 释放当前资源
        this->elements = oth.elements;
        this->first_free = oth.first_free;
        this->cap = oth.cap;

        // 将 oth 的指针置空，避免析构时释放资源
        oth.elements = oth.first_free = oth.cap = nullptr;
    }
    return *this;
}

StrVec::StrVec(std::initializer_list<std::string> il)
{
    auto data = allo_n_copy(il.begin(), il.end());
    this->elements = data.first;
    this->first_free = this->cap = data.second;
}

StrVec &StrVec::operator=(const StrVec &oth)
{
    auto data = allo_n_copy(oth.begin(), oth.end());
    this->free();
    this->elements = data.first;
    this->first_free = this->cap = data.second;
    return *this;
}

void StrVec::free()
{
    if (elements)
    {
        // for (auto i = this->first_free; i != this->elements;)
        //     allo.destroy(--i);
        std::for_each(this->begin(), this->end(),
                      [](std::string &s)
                      {
                          allo.destroy(&s);
                      });

        allo.deallocate(this->elements, this->cap - this->elements);
    }
}

void StrVec::reallocate()
{
    auto newcapacity = this->size() ? 2 * this->size() : 1;
    auto newdata = this->allo.allocate(newcapacity);
    auto dest = newdata;        // 新空间首元素地址
    auto elem = this->elements; // 旧空间首元素地址
    // 循环调用移动拷贝构造函数移动每一个string
    for (size_t i = 0; i != this->size(); ++i)
        allo.construct(dest++, std::move(*elem++));
    this->free();                             // 释放旧空间
    this->elements = newdata;                 // 新空间首元素地址赋值
    this->first_free = dest;                  // 尾元素下一位置的地址
    this->cap = this->elements + newcapacity; // 新空间最后位置的下一位的地址
}

void StrVec::reallocate(size_t n)
{
    auto newdata = this->allo.allocate(n);
    auto dest = newdata;        // 新空间首元素地址
    auto elem = this->elements; // 旧空间首元素地址
    // 循环调用移动拷贝构造函数移动每一个string
    for (size_t i = 0; i != this->size(); ++i)
        allo.construct(dest++, std::move(*elem++));
    this->free();                   // 释放旧空间
    this->elements = newdata;       // 新空间首元素地址赋值
    this->first_free = dest;        // 尾元素下一位置的地址
    this->cap = this->elements + n; // 新空间最后位置的下一位的地址
}

void StrVec::check()
{
    if (this->size() == this->capacity())
        this->reallocate();
}

std::pair<std::string *, std::string *> StrVec::allo_n_copy(const std::string *beg, const std::string *end)
{
    auto data = allo.allocate(end - beg);
    return {data, std::uninitialized_copy(beg, end, data)};
}

void StrVec::push_back(const std::string &s)
{
    this->check();
    this->allo.construct(this->first_free++, s);
}

size_t StrVec::size() const
{
    return this->first_free - this->elements;
}

size_t StrVec::capacity() const
{
    return this->cap - this->elements;
}

std::string *StrVec::begin() const
{
    return this->elements;
}

std::string *StrVec::end() const
{
    return this->first_free;
}

void StrVec::resize(size_t n, const std::string &s)
{
    if (n < this->size())
    {
        for (size_t i = n; i != this->size();)
        {
            allo.destroy(--this->first_free);
        }
    }
    else if (n > this->size())
    {
        if (n <= this->capacity())
        {
            for (size_t i = 0; i != n - this->size(); ++i)
            {
                allo.construct(this->first_free++, s);
            }
        }
        else
        {
            size_t old_size = this->size();
            this->reserve(2 * n);
            for (size_t i = 0; i != n - old_size; ++i)
            {
                allo.construct(this->first_free++, s);
            }
        }
    }
    // 如果 n == this->size()，什么都不做
}

void StrVec::resize(size_t n)
{
    resize(n, std::string());
}

void StrVec::reserve(size_t n)
{
    if (n <= this->capacity())
        return;
    else
    {
        this->reallocate(n);
    }
}
