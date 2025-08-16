#ifndef QUERY_BASE_H
#define QUERY_BASE_H

#include <string>
#include <vector>
#include <memory>
#include "Query.h"

class TextQuery;
class QueryResult;

class Query_base
{
    friend class Query;

protected:
    using line_no = std::vector<std::string>::size_type;
    ~Query_base() = default; // 析构函数
private:
    virtual QueryResult eval(const TextQuery &) const = 0; // 纯虚函数，派生类必须实现
    virtual std::string rep() const = 0;                   // 纯虚函数，派生类必须实现
};

class WordQuery : public Query_base
{
    friend class Query; // 让Query类可以访问WordQuery的私有成员
private:
    WordQuery(const std::string &s) : query_word(s) {}              // 构造函数
    virtual QueryResult eval(const TextQuery &) const override;     // 实现纯虚函数
    virtual std::string rep() const override { return query_word; } // 实现纯虚
    std::string query_word;                                         // 查询的单词
};

class NotQuery : public Query_base
{
    friend class Query;                    // 让Query类可以访问NotQuery的私有成员
    friend Query operator~(const Query &); // 取反操作符
private:
    NotQuery(const Query &q) : query(q) {}                                        // 构造函数
    virtual QueryResult eval(const TextQuery &) const override;                   // 实现纯虚函数
    virtual std::string rep() const override { return "~(" + query.rep() + ")"; } // 实现纯虚函数
    Query query;                                                                  // 被取反的查询对象
};

// 非成员函数，用于创建Query对象
inline Query operator~(const Query &operand)
{
    return std::shared_ptr<Query_base>(new NotQuery(operand));
}

class BinaryQuery : public Query_base
{
    friend class Query; // 让Query类可以访问BinaryQuery的私有成员
protected:
    BinaryQuery(const Query &lhs, const Query &rhs, const std::string &op)
        : left(lhs), right(rhs), opSym(op) {}              // 构造函数
    virtual QueryResult eval(const TextQuery &) const = 0; // 纯虚函数
    virtual std::string rep() const override
    {
        return "(" + left.rep() + " " + opSym + " " + right.rep() + ")";
    } // 实现纯虚函数
    Query left;        // 左操作数
    Query right;       // 右操作数
    std::string opSym; // 操作符符号
};

class AndQuery : public BinaryQuery
{
    friend Query operator&(const Query &, const Query &); // 交集操作符
private:
    AndQuery(const Query &lhs, const Query &rhs)
        : BinaryQuery(lhs, rhs, "&") {}                         // 构造函数
    virtual QueryResult eval(const TextQuery &) const override; // 实现纯虚函数
};

// 非成员函数，用于创建Query对象
inline Query operator&(const Query &lhs, const Query &rhs)
{
    return std::shared_ptr<Query_base>(new AndQuery(lhs, rhs));
}

class OrQuery : public BinaryQuery
{
    friend Query operator|(const Query &, const Query &); // 并集操作符
private:
    OrQuery(const Query &lhs, const Query &rhs)
        : BinaryQuery(lhs, rhs, "|") {}                         // 构造函数
    virtual QueryResult eval(const TextQuery &) const override; // 实现纯虚函数
};

// 非成员函数，用于创建Query对象
inline Query operator|(const Query &lhs, const Query &rhs)
{
    return std::shared_ptr<Query_base>(new OrQuery(lhs, rhs));
}

#endif // QUERY_BASE_H