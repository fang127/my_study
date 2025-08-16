#include "StrBlobPtr.h"

std::shared_ptr<std::vector<std::string>> StrBlobPtr::check(size_type i, const std::string &str) const
{
    auto sp = this->wptr.lock();
    if (!sp)
        throw std::runtime_error("unbound StrBlobPtr");
    if (i >= sp->size())
        throw std::out_of_range(str);
    return sp;
}

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

bool StrBlobPtr::operator!=(const StrBlobPtr &other) const
{
    auto i = this->wptr.lock();
    auto j = other.wptr.lock();
    if (i == j)
    {
        return this->curr != other.curr; // if both point to the same StrBlob, compare indices
    }
    else
        return true; // if they point to different StrBlobs, they are not equal
}