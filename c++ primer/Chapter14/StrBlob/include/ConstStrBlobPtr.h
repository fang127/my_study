#ifndef CONSTSTRBLOBPTR_H
#define CONSTSTRBLOBPTR_H
#include <iostream>
#include <memory>
#include <vector>
#include <string>

class StrBlob; // 前向声明

class ConstStrBlobPtr
{
    typedef std::vector<std::string>::size_type size_type;
    friend bool operator!=(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs); // not equal operator
    friend bool operator<(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs);
    friend ConstStrBlobPtr operator+(const ConstStrBlobPtr &lhs, size_t n);
    friend ConstStrBlobPtr operator-(const ConstStrBlobPtr &lhs, size_t n);

public:
    ConstStrBlobPtr() : curr(0) {}                       // default constructor
    ConstStrBlobPtr(const StrBlob &a, size_type sz = 0); // constructor with StrBlob reference and index
    const std::string &deref() const;                    // dereference operator
    ConstStrBlobPtr &incr();                             // increment operator
    const std::string &operator*() const;                // 解引用操作符
    const std::string *operator->() const;               // 指针操作符
    ConstStrBlobPtr &operator++();                       // 前置递增
    ConstStrBlobPtr operator++(int);                     // 后置递增
    ConstStrBlobPtr &operator--();                       // 前置递减
    ConstStrBlobPtr operator--(int);                     // 后置递减
    const std::string &operator[](size_t) const;         // 下标
    ConstStrBlobPtr &operator+=(size_t);                 // 前移
    ConstStrBlobPtr &operator-=(size_t);                 // 后移

private:
    std::weak_ptr<std::vector<std::string>> wptr;
    size_type curr;
    std::shared_ptr<std::vector<std::string>> check(size_type i, const std::string &str) const; // check if index is valid
};

// 非成员函数
bool operator!=(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs); // 不等
bool operator==(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs); // 等于
bool operator<(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs);  // 小于
ConstStrBlobPtr operator+(const ConstStrBlobPtr &lhs, size_t n);         // 前移
ConstStrBlobPtr operator-(const ConstStrBlobPtr &lhs, size_t n);         // 后移

#endif // CONSTSTRBLOBPTR_H