#include <stdexcept>
#include "StrBlobPtr.h"
#include "StrBlob.h"

StrBlobPtr::StrBlobPtr(StrBlob &a, size_type sz) : wptr(a.sp), curr(sz) {}

std::string &StrBlobPtr::deref() const
{
    auto sp = this->check(this->curr, "dereference past end");
    return (*sp)[curr];
}

StrBlobPtr &StrBlobPtr::incr()
{
    auto sp = this->check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

std::string &StrBlobPtr::operator*() const
{
    auto sp = this->check(curr, "dereference past end of StrBlobPtr");
    return (*sp)[curr];
}

std::string *StrBlobPtr::operator->() const
{
    auto sp = this->check(curr, "dereference past end of StrBlobPtr");
    return &((*sp)[curr]); // return a pointer to the string at the current index
}

std::string &StrBlobPtr::operator[](size_t n)
{
    auto p = this->check(n + curr, "out of range");
    return p->at(curr + n);
}

StrBlobPtr &StrBlobPtr::operator++()
{
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

StrBlobPtr StrBlobPtr::operator++(int)
{
    StrBlobPtr temp = *this; // create a copy of the current state
    ++*this;                 // increment the current index
    return temp;             // return the copy
}

StrBlobPtr &StrBlobPtr::operator--()
{
    --curr;
    check(curr, "decrement past beginning of StrBlobPtr");
    return *this;
}

StrBlobPtr StrBlobPtr::operator--(int)
{
    StrBlobPtr temp = *this; // create a copy of the current state
    --*this;                 // increment the current index
    return temp;             // return the copy
}

StrBlobPtr &StrBlobPtr::operator+=(size_t n)
{
    auto sp = this->wptr.lock();
    if (!sp)
        throw std::runtime_error("unbound ConstStrBlobPtr");

    if (this->curr + n > sp->size())
        throw std::out_of_range("increment past end of ConstStrBlobPtr");

    this->curr += n;
    return *this;
}

StrBlobPtr &StrBlobPtr::operator-=(size_t n)
{
    auto sp = this->wptr.lock();
    if (!sp)
        throw std::runtime_error("unbound ConstStrBlobPtr");
    if (n > this->curr)
        throw std::out_of_range("decrement past beginning of ConstStrBlobPtr");
    if (this->curr - n > sp->size())
        throw std::out_of_range("decrement past end of ConstStrBlobPtr");

    this->curr -= n;
    return *this;
}

/*

private


*/

std::shared_ptr<std::vector<std::string>> StrBlobPtr::check(size_type i, const std::string &str) const
{
    auto sp = this->wptr.lock();
    if (!sp)
        throw std::runtime_error("unbound StrBlobPtr");
    if (i >= sp->size())
        throw std::out_of_range(str);
    return sp;
}
/*


非成员函数


*/

bool operator==(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
    return lhs.wptr.lock() == rhs.wptr.lock() && lhs.curr == rhs.curr; // compare both the weak pointers and indices
}

bool operator!=(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
    return !(lhs == rhs); // use the equality operator to determine inequality
}

bool operator<(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
    auto i = lhs.wptr.lock();
    auto j = rhs.wptr.lock();
    if (i == j)
    {
        if (!i)
            return false;
        return lhs.curr < rhs.curr; // if both point to the same StrBlob, compare indices
    }
    else
        return false; // if they point to different StrBlobs, compare weak pointers
}

StrBlobPtr operator+(const StrBlobPtr &lhs, size_t n)
{
    StrBlobPtr result = lhs; // create a copy of lhs
    result += n;             // increment the index by n
    return result;           // return the modified copy
}

StrBlobPtr operator-(const StrBlobPtr &lhs, size_t n)
{
    StrBlobPtr result = lhs; // create a copy of lhs
    result -= n;             // decrement the index by n
    return result;           // return the modified copy
}