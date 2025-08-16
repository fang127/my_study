#ifndef CONSTSTRBLOBPTR_H
#define CONSTSTRBLOBPTR_H
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include "StrBlob.h"

class ConstStrBlobPtr
{
    typedef std::vector<std::string>::size_type size_type;

public:
    ConstStrBlobPtr() : curr(0) {}                                                // default constructor
    ConstStrBlobPtr(const StrBlob &a, size_type sz = 0) : wptr(a.sp), curr(sz) {} // constructor with StrBlob reference and index
    const std::string &deref() const;                                             // dereference operator
    const ConstStrBlobPtr &incr() const;                                          // increment operator
    bool operator!=(const ConstStrBlobPtr &other) const;                          // not equal operator

private:
    const std::weak_ptr<std::vector<std::string>> wptr;
    mutable size_type curr;
    const std::shared_ptr<std::vector<std::string>> check(size_type i, const std::string &str) const; // check if index is valid
};

#endif // CONSTSTRBLOBPTR_H