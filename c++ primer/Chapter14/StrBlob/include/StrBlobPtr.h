#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H
#include <iostream>
#include <memory>
#include <vector>
#include <string>

class StrBlob; // 前向声明

class StrBlobPtr
{
    typedef std::vector<std::string>::size_type size_type;
    friend bool operator==(const StrBlobPtr &lhs, const StrBlobPtr &rhs);
    friend bool operator!=(const StrBlobPtr &lhs, const StrBlobPtr &rhs);
    friend bool operator<(const StrBlobPtr &lhs, const StrBlobPtr &rhs);
    friend StrBlobPtr operator+(const StrBlobPtr &lhs, size_t n);
    friend StrBlobPtr operator-(const StrBlobPtr &lhs, size_t n);

public:
    StrBlobPtr() : curr(0) {}                 // default constructor
    StrBlobPtr(StrBlob &a, size_type sz = 0); // constructor with StrBlob reference and index
    std::string &deref() const;               // dereference operator
    std::string &operator*() const;           // dereference operator
    std::string *operator->() const;          // member access operator
    StrBlobPtr &operator++();                 // 前置递增
    StrBlobPtr operator++(int);               // 后置递增
    StrBlobPtr &operator--();                 // 前置递减
    StrBlobPtr operator--(int);               // 后置递减
    StrBlobPtr &incr();                       // increment operator
    std::string &operator[](size_t);
    StrBlobPtr &operator+=(size_t);
    StrBlobPtr &operator-=(size_t);

private:
    std::weak_ptr<std::vector<std::string>> wptr;
    size_type curr;
    std::shared_ptr<std::vector<std::string>> check(size_type i, const std::string &str) const; // check if index is valid
};

// 非成员函数
// 重载运算符
bool operator==(const StrBlobPtr &lhs, const StrBlobPtr &rhs);
bool operator!=(const StrBlobPtr &lhs, const StrBlobPtr &rhs);
bool operator<(const StrBlobPtr &lhs, const StrBlobPtr &rhs);
StrBlobPtr operator+(const StrBlobPtr &lhs, size_t n);
StrBlobPtr operator-(const StrBlobPtr &lhs, size_t n);

#endif // STRBLOBPTR_H