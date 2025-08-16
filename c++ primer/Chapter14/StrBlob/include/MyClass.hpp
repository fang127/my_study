#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include <stdexcept>

class StrBlobPtr;

class MyClass
{
public:
    MyClass() = default;
    MyClass(StrBlobPtr *p) : ptr(p) {}

    StrBlobPtr &operator*() const
    {
        if (!ptr)
            throw std::runtime_error("Null StrBlobPtr pointer");
        return *ptr;
    }

    StrBlobPtr *operator->() const
    {
        return &this->operator*();
    }

private:
    StrBlobPtr *ptr = nullptr;
};

#endif // MYCLASS_HPP