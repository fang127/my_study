#include "Query_base.h"
#include "TextQuery.h"   // 确保TextQuery完整定义
#include "QueryResult.h" // 确保QueryResult完整定义
#include "Query.h"       // 确保Query完整定义

/*

    成员函数

*/
QueryResult Query::eval(const TextQuery &t) const
{
    return q->eval(t);
}
// 构造函数实现
Query::Query(const std::string &s) : q(std::shared_ptr<Query_base>(new WordQuery(s))) {}
std::string Query::rep() const
{
    return q->rep();
}

/*

    非成员函数

*/

std::ostream &operator<<(std::ostream &os, const Query &q)
{
    return os << q.rep();
}