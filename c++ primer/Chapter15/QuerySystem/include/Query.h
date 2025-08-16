#ifndef QUERY_H
#define QUERY_H

#include <memory>
#include <string>
#include <iostream>

class Query_base;

class TextQuery;

class QueryResult;

class Query
{
    friend Query operator~(const Query &);                          // 取反操作符
    friend Query operator&(const Query &, const Query &);           // 交集操作符
    friend Query operator|(const Query &, const Query &);           // 并集操作符
    friend std::ostream &operator<<(std::ostream &, const Query &); // 输出操作符

public:
    // 构建一个wordQuery对象
    Query(const std::string &);
    // 接口函数，调用Query_base的eval, rep方法
    QueryResult eval(const TextQuery &) const;
    std::string rep() const;

private:
    Query(const std::shared_ptr<Query_base> query) : q(query) {}
    std::shared_ptr<Query_base> q;
};

// 输出运算符
std::ostream &operator<<(std::ostream &, const Query &);

#endif // QUERY_H