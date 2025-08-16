#ifndef TEST_UNIQUEPTR_H
#define TEST_UNIQUEPTR_H

#include "Deleter.h"

template <typename T, typename D = Deleter>
class UniquePtr
{
public:
    UniquePtr(T *p = nullptr, D d = Deleter()) : ptr(p), del(d) {}

    ~UniquePtr() { del(ptr); }

    // move ctor
    UniquePtr(UniquePtr &&u) : ptr(u.ptr), del(u.del) { u.ptr = nullptr; }

    // move assignment
    UniquePtr &operator=(UniquePtr &&u);

    T operator*() const { return *ptr; }

    T *operator->() const { return ptr; }

    void reset(T *p)
    {
        del(ptr);
        ptr = p;
    }

    void reset(T *p, D d)
    {
        reset(p);
        del = d;
    }

private:
    T *ptr;
    D del;
};

template <typename T, typename D>
UniquePtr<T, D> &UniquePtr<T, D>::operator=(UniquePtr &&u)
{
    if (this != &u)
    {
        del(ptr);
        ptr = u.ptr;
        del = u.del;

        u.ptr = nullptr;
    }
    return *this;
}

#endif // TEST_UNIQUEPTR_H
