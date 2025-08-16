#include "StrBlob.h"

void StrBlob::check(const size_type i, const std::string str) const
{
    if (i > this->sp->size())
        throw std::out_of_range(str);
}

void StrBlob::push_back(const std::string &str)
{
    return this->sp->push_back(str);
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

std::string &StrBlob::back() const
{
    check(0, "back on empty StrBlob");
    return sp->back();
}

std::string &StrBlob::front() const
{
    check(0, "front on empty StrBlob");
    return sp->front();
}