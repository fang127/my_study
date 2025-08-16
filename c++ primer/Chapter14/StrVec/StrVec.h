#ifndef STRVEC_H
#define STRVEC_H

#include <string>
#include <initializer_list>
#include <memory>

class StrVec
{
    friend bool operator==(const StrVec &lhs, const StrVec &rhs); // 重载等于运算符
    friend bool operator!=(const StrVec &lhs, const StrVec &rhs); // 重载不
    friend bool operator<(const StrVec &lhs, const StrVec &rhs);  // 重载小于运算符

public:
    StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}; // 默认构造函数
    StrVec(const StrVec &);                                             // 拷贝构造函数
    StrVec(StrVec &&) noexcept;                                         // 移动构造函数
    StrVec &operator=(StrVec &&) noexcept;                              // 移动赋值运算符
    StrVec(std::initializer_list<std::string>);                         // 初始化列表构造函数
    StrVec &operator=(const StrVec &);                                  // 拷贝赋值运算符
    StrVec &operator=(std::initializer_list<std::string>);              // 初始化列表赋值运算符
    std::string &operator[](size_t n);                                  // 重载下标运算符
    const std::string &operator[](size_t n) const;                      // 重载下标运算符
    ~StrVec() { free(); };                                              // 析构函数
    void push_back(const std::string &);                                // 添加元素到末尾
    size_t size() const;                                                // 返回当前元素数量
    void resize(size_t);                                                // 调整大小，使用默认值
    void resize(size_t, const std::string &);                           // 调整大小，使用指定值
    void reserve(size_t);                                               // 保留至少 n 个元素的空间
    size_t capacity() const;                                            // 返回当前容量
    std::string *begin() const;                                         // 返回指向第一个元素的指针
    std::string *end() const;                                           // 返回指向最后一个元素之后的指针

private:
    static std::allocator<std::string> allo;                                                       // 静态成员变量，用于分配内存
    std::string *elements;                                                                         // 指向当前元素的指针
    std::string *first_free;                                                                       // 指向下一个可用位置的指针
    std::string *cap;                                                                              // 指向分配空间的末尾的指针
    void free();                                                                                   // 释放资源
    void check();                                                                                  // 检查内存空间分配是否足够
    void reallocate();                                                                             // 重新分配资源
    void reallocate(size_t);                                                                       // 重新分配资源
    std::pair<std::string *, std::string *> allo_n_copy(const std::string *, const std::string *); // 值拷贝
};

// 重载运算符
bool operator==(const StrVec &lhs, const StrVec &rhs); // 重载等于运算符
bool operator!=(const StrVec &lhs, const StrVec &rhs); // 重载不
bool operator<(const StrVec &lhs, const StrVec &rhs);  // 重载小于运算符

#endif // STRVEC_H