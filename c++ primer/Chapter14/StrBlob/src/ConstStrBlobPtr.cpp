#include "ConstStrBlobPtr.h"
#include "StrBlob.h"

ConstStrBlobPtr::ConstStrBlobPtr(const StrBlob &a, size_type sz) : wptr(a.sp), curr(sz)
{
}

const std::string &ConstStrBlobPtr::deref() const
{
    auto sp = this->check(this->curr, "dereference past end");
    return (*sp)[this->curr];
}

ConstStrBlobPtr &ConstStrBlobPtr::incr()
{
    auto sp = this->check(this->curr, "increment past end of StrBlobPtr");
    ++this->curr;
    return *this;
}

const std::string &ConstStrBlobPtr::operator*() const
{
    auto sp = this->check(this->curr, "dereference past end");
    return (*sp)[this->curr];
}

const std::string *ConstStrBlobPtr::operator->() const
{
    auto sp = this->check(this->curr, "dereference past end");
    return &((*sp)[this->curr]);
}

ConstStrBlobPtr &ConstStrBlobPtr::operator++()
{
    auto sp = this->check(this->curr, "increment past end of ConstStrBlobPtr");
    ++this->curr;
    return *this;
}

ConstStrBlobPtr ConstStrBlobPtr::operator++(int)
{
    auto sp = this->check(this->curr, "increment past end of ConstStrBlobPtr");
    ConstStrBlobPtr temp = *this; // 保存当前状态
    ++this->curr;                 // 前移
    return temp;                  // 返回之前的状态
}

ConstStrBlobPtr &ConstStrBlobPtr::operator--()
{
    if (this->curr == 0)
    {
        throw std::out_of_range("decrement past begin of ConstStrBlobPtr");
    }
    --this->curr;
    return *this;
}

ConstStrBlobPtr ConstStrBlobPtr::operator--(int)
{
    if (this->curr == 0)
    {
        throw std::out_of_range("decrement past begin of ConstStrBlobPtr");
    }
    ConstStrBlobPtr temp = *this; // 保存当前状态
    --this->curr;                 // 后移
    return temp;                  // 返回之前的状态
}

const std::string &ConstStrBlobPtr::operator[](size_t n) const
{
    auto sp = this->check(n + this->curr, "index out of range in ConstStrBlobPtr");
    return (*sp)[n + this->curr];
}

ConstStrBlobPtr &ConstStrBlobPtr::operator+=(size_t n)
{
    auto sp = this->wptr.lock();
    if (!sp)
        throw std::runtime_error("unbound ConstStrBlobPtr");

    if (this->curr + n > sp->size())
        throw std::out_of_range("increment past end of ConstStrBlobPtr");

    this->curr += n;
    return *this;
}

ConstStrBlobPtr &ConstStrBlobPtr::operator-=(size_t n)
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

std::shared_ptr<std::vector<std::string>> ConstStrBlobPtr::check(size_type i, const std::string &str) const
{
    auto sp = this->wptr.lock();
    if (!sp)
    {
        throw std::runtime_error("unbound StrBlobPtr");
    }
    if (i >= sp->size())
    {
        throw std::out_of_range(str);
    }
    return sp;
}

/*

    非成员函数

*/

bool operator!=(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs)
{
    auto i = lhs.wptr.lock(), j = rhs.wptr.lock();
    if (i == j)
    {
        return lhs.curr != rhs.curr;
    }
    else
        return true;
}

bool operator==(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs)
{
    return !(lhs != rhs);
}

bool operator<(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs)
{
    auto l = lhs.wptr.lock(), r = rhs.wptr.lock();
    if (l == r)
    {
        if (!r)
            return false;             // 两个指针都为空，认为是相等
        return (lhs.curr < rhs.curr); // 指向相同 vector，比较指针位置
    }
    else
    {
        return false; // 指向不同 vector 时，不能比较
    }
}

ConstStrBlobPtr operator+(const ConstStrBlobPtr &lhs, size_t n)
{
    auto temp = lhs; // 创建一个临时的 ConstStrBlobPtr 对象
    temp += n;
    return temp; // 返回新的 ConstStrBlobPtr 对象
}

ConstStrBlobPtr operator-(const ConstStrBlobPtr &lhs, size_t n)
{
    auto temp = lhs; // 创建一个临时的 ConstStrBlobPtr 对象
    temp -= n;
    return temp; // 返回新的 ConstStrBlobPtr 对象
}