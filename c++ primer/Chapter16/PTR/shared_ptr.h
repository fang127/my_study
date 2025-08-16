#ifndef TEST_SHAREDPTR_H
#define TEST_SHAREDPTR_H

#include <iostream>
#include <functional>
#include <stdexcept>
#include "Deleter.h"

template <typename T>
class SharedPtr;

template <typename T>
bool operator==(const SharedPtr<T> &lhs, const SharedPtr<T> &rhs);

template <typename T>
class SharedPtr
{
    friend bool operator== <T>(const SharedPtr<T> &lhs, const SharedPtr<T> &rhs);

public:
    SharedPtr() : ptr(nullptr), cnt(nullptr) {}

    SharedPtr(T *p, std::function<void(T *)> d = Deleter())
        : ptr(p), del(d), cnt(new std::size_t(1)) {}

    // copy-control
    SharedPtr(const SharedPtr &p)
        : ptr(p.ptr), del(p.del), cnt(p.cnt)
    {
        ++*cnt;
        debug();
    }

    // copy assignment
    SharedPtr &operator=(const SharedPtr &p);

    // member
    T &operator*() const { return *ptr; }

    // arrow
    T *operator->() const { return ptr; }

    operator bool() const { return ptr != nullptr; }

    // reset
    void reset(T *p);

    void reset(T *p, std::function<void(T *)> deleter);

    ~SharedPtr();

    void debug() const
    {
        if (cnt)
        {
            std::cout << "ref cnt: " << *cnt << std::endl;
        }
        else
        {
            throw std::runtime_error("should not happen");
        }
    }

private:
    T *ptr;
    std::function<void(T *)> del;
    std::size_t *cnt;
};

template <typename T>
SharedPtr<T> &SharedPtr<T>::operator=(const SharedPtr &p)
{
    ++*p.cnt;
    if (--*cnt == 0)
    {
        del ? del(ptr) : delete ptr;
        delete cnt;
    }
    ptr = p.ptr;
    del = p.del;
    cnt = p.cnt;
    debug();
    return *this;
}

template <typename T>
void SharedPtr<T>::reset(T *p)
{
    if (cnt && --*cnt == 0)
    {
        del ? del(ptr) : delete ptr;
        delete cnt;
    }
    ptr = p;
    cnt = new std::size_t(1);
}

template <typename T>
void SharedPtr<T>::reset(T *p, std::function<void(T *)> deleter)
{
    reset(p);
    del = deleter;
}

template <typename T>
SharedPtr<T>::~SharedPtr()
{
    if (--*cnt == 0)
    {
        del ? del(ptr) : delete ptr;
        delete cnt;
    }
}

// == and != operator
template <typename T>
bool operator==(const SharedPtr<T> &lhs, const SharedPtr<T> &rhs)
{
    return lhs.ptr == rhs.ptr;
}

template <typename T>
bool operator!=(const SharedPtr<T> &lhs, const SharedPtr<T> &rhs)
{
    return !(lhs == rhs);
}

// helper function, simulate std::make_shared()
template <typename T, class... Args>
SharedPtr<T> make_shared(Args &&...args)
{
    SharedPtr<T> s(new T(std::forward<Args>(args)...));
    return s;
}
#endif // TEST_SHAREDPTR_H