#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include "StrBlob.h"

class StrBlobPtr
{
    typedef std::vector<std::string>::size_type size_type;

public:
    StrBlobPtr() : curr(0) {}                                          // default constructor
    StrBlobPtr(StrBlob &a, size_type sz = 0) : wptr(a.sp), curr(sz) {} // constructor with StrBlob reference and index
    std::string &deref() const;                                        // dereference operator
    StrBlobPtr &incr();                                                // increment operator
    bool operator!=(const StrBlobPtr &other) const;                    // not equal operator

private:
    std::weak_ptr<std::vector<std::string>> wptr;
    size_type curr;
    std::shared_ptr<std::vector<std::string>> check(size_type i, const std::string &str) const; // check if index is valid
};

#endif // STRBLOBPTR_H