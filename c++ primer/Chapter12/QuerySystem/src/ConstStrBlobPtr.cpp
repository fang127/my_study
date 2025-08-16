#include "ConstStrBlobPtr.h"

const std::string &ConstStrBlobPtr::deref() const
{
    auto sp = this->check(this->curr, "dereference past end");
    return (*sp)[this->curr];
}

const ConstStrBlobPtr &ConstStrBlobPtr::incr() const
{
    auto sp = this->check(this->curr, "increment past end of StrBlobPtr");
    ++this->curr;
    return *this;
}

bool ConstStrBlobPtr::operator!=(const ConstStrBlobPtr &other) const
{
    auto i = this->wptr.lock(), j = other.wptr.lock();
    if (i == j)
    {
        return this->curr != other.curr;
    }
    else
        return true;
}

const std::shared_ptr<std::vector<std::string>> ConstStrBlobPtr::check(size_type i, const std::string &str) const
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