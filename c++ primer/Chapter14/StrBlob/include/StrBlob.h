#ifndef STRBLOB_H
#define STRBLOB_H
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <initializer_list>

class StrBlobPtr;

class ConstStrBlobPtr;

class StrBlob
{
    friend class StrBlobPtr;
    friend class ConstStrBlobPtr;
    friend bool operator==(const StrBlob &lhs, const StrBlob &rhs);
    friend bool operator!=(const StrBlob &lhs, const StrBlob &rhs);
    friend bool operator<(const StrBlob &lhs, const StrBlob &rhs);

public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob() : sp(std::make_shared<std::vector<std::string>>()) {}
    StrBlob(std::initializer_list<std::string> il) : sp(std::make_shared<std::vector<std::string>>(il)) {}
    StrBlob(const StrBlob &sb) : sp(std::make_shared<std::vector<std::string>>(*sb.sp)) {} // copy constructor
    StrBlob &operator=(const StrBlob &sb);
    const std::string &operator[](size_t n) const;
    std::string &operator[](size_t n);
    size_type size() const { return sp->size(); }
    bool empty() const { return sp->empty(); }
    void push_back(const std::string &str);
    void push_back(std::string &&str) noexcept; // move push_back
    void pop_back();
    std::string &back();
    std::string &front();
    const std::string &back() const;
    const std::string &front() const;
    StrBlobPtr begin();
    StrBlobPtr end();
    ConstStrBlobPtr begin() const;
    ConstStrBlobPtr end() const;
    ConstStrBlobPtr cbegin();
    ConstStrBlobPtr cend();
    void print() const
    {
        std::cout << sp << std::endl;
    }

private:
    std::shared_ptr<std::vector<std::string>> sp;
    void check(const size_type i, const std::string str) const;
};

// 重载运算符
bool operator==(const StrBlob &lhs, const StrBlob &rhs);
bool operator!=(const StrBlob &lhs, const StrBlob &rhs);
bool operator<(const StrBlob &lhs, const StrBlob &rhs);

#endif // STRBLOB_H