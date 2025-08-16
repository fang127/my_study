#include "StrBlobPtr.h"
#include "StrBlob.h"
#include "ConstStrBlobPtr.h"

void StrBlob::push_back(const std::string &str)
{
    if (!sp)
        sp = std::make_shared<std::vector<std::string>>();
    sp->push_back(str);
}

void StrBlob::push_back(std::string &&str) noexcept
{
    if (!sp)
        sp = std::make_shared<std::vector<std::string>>();
    sp->push_back(std::move(str));
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    sp->pop_back();
}

std::string &StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return sp->back();
}

std::string &StrBlob::front()
{
    check(0, "front on empty StrBlob");
    return sp->front();
}

const std::string &StrBlob::back() const
{
    check(0, "back on empty StrBlob");
    return sp->back();
}

const std::string &StrBlob::front() const
{
    check(0, "front on empty StrBlob");
    return sp->front();
}

StrBlobPtr StrBlob::begin()
{
    return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end()
{
    return StrBlobPtr(*this, this->sp->size());
}

ConstStrBlobPtr StrBlob::begin() const
{
    return ConstStrBlobPtr(*this);
}
ConstStrBlobPtr StrBlob::end() const
{
    return ConstStrBlobPtr(*this, this->sp->size());
}

ConstStrBlobPtr StrBlob::cbegin()
{
    return ConstStrBlobPtr(*this);
}

ConstStrBlobPtr StrBlob::cend()
{
    return ConstStrBlobPtr(*this, this->sp->size());
}

StrBlob &StrBlob::operator=(const StrBlob &sb)
{
    auto temp = std::make_shared<std::vector<std::string>>(*sb.sp);
    sp.reset(); // 释放当前的shared_ptr
    sp = temp;  // 重新赋值为新的shared_ptr
    return *this;
}

const std::string &StrBlob::operator[](size_t n) const
{
    this->check(n, "out of range");
    return (*(this->sp))[n];
}
std::string &StrBlob::operator[](size_t n)
{
    this->check(n, "out of range");
    return (*(this->sp))[n];
}

/*

private

*/
void StrBlob::check(const size_type i, const std::string str) const
{
    if (i > this->sp->size())
        throw std::out_of_range(str);
}

/*



非成员函数



*/

bool operator==(const StrBlob &lhs, const StrBlob &rhs)
{
    return *lhs.sp == *rhs.sp;
}

bool operator!=(const StrBlob &lhs, const StrBlob &rhs)
{
    return !(lhs == rhs);
}

bool operator<(const StrBlob &lhs, const StrBlob &rhs)
{
    return *lhs.sp < *rhs.sp;
}