#include <algorithm>
#include "Query.h"
#include "Query_base.h"
#include "TextQuery.h"   // 确保TextQuery完整定义
#include "QueryResult.h" // 确保QueryResult完整定义

/*

    wordQuery成员函数

*/
QueryResult WordQuery::eval(const TextQuery &tq) const
{
    return tq.query(query_word);
}

/*

    NotQuery成员函数

*/
QueryResult NotQuery::eval(const TextQuery &tq) const
{
    // 获取被取反的查询结果
    QueryResult result = this->query.eval(tq);

    // 创建一个新的set来存储不包含查询单词的行号
    auto ret_lines = std::make_shared<std::set<Query_base::line_no>>();
    auto beg = result.begin(), end = result.end();
    auto sz = result.get_files()->size();
    for (size_t n = 0; n != sz; ++n)
    {
        // 如果当前行号不在result中，则添加到ret_lines
        if (beg == end || *beg != n)
            ret_lines->insert(n);
        else
            ++beg; // 如果当前行号在result中，则跳过
    }
    // 返回一个新的QueryResult对象，包含不包含查询单词的行号
    return QueryResult(result.get_files(), ret_lines, this->rep());
}

/*

    AndWord操作符的实现

*/
QueryResult AndQuery::eval(const TextQuery &tq) const
{
    auto left_result = this->left.eval(tq);                             // 获取左操作数的查询结果
    auto right_result = this->right.eval(tq);                           // 获取右操作数的查询结果
    auto ret_lines = std::make_shared<std::set<Query_base::line_no>>(); // 创建一个新的set来存储交集行号
    std::set_intersection(left_result.begin(), left_result.end(),
                          right_result.begin(), right_result.end(),
                          std::inserter(*ret_lines, ret_lines->begin()));

    // 返回一个新的QueryResult对象，包含交集行号
    return QueryResult(left_result.get_files(), ret_lines, this->rep());
}

/*

    OrQuery操作符的实现

*/
QueryResult OrQuery::eval(const TextQuery &tq) const
{
    auto left_result = this->left.eval(tq);                                                                   // 获取左操作数的查询结果
    auto right_result = this->right.eval(tq);                                                                 // 获取右操作数的查询结果
    auto ret_lines = std::make_shared<std::set<Query_base::line_no>>(left_result.begin(), left_result.end()); // 创建一个新的set来存储并集行号
    ret_lines->insert(right_result.begin(), right_result.end());                                              // 将右操作数的行号插入到ret_lines中
    // 返回一个新的QueryResult对象，包含并集行号
    return QueryResult(left_result.get_files(), ret_lines, this->rep());
}