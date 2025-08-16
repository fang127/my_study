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

public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob() : sp(std::make_shared<std::vector<std::string>>()) {}
    StrBlob(std::initializer_list<std::string> il) : sp(std::make_shared<std::vector<std::string>>(il)) {}
    size_type size() const { return sp->size(); }
    bool empty() const { return sp->empty(); }
    void push_back(const std::string &str);
    void pop_back();
    std::string &back();
    std::string &front();
    const std::string &back() const;
    const std::string &front() const;
    StrBlobPtr begin();
    StrBlobPtr end();
    ConstStrBlobPtr begin() const;
    ConstStrBlobPtr end() const;

private:
    std::shared_ptr<std::vector<std::string>> sp;
    void check(const size_type i, const std::string str) const;
};

#endif // STRBLOB_H