#ifndef QUERYRESULT_H
#define QUERYRESULT_H

#include <iostream>
#include <memory>
#include <set>
#include <vector>
#include "StrBlob.h"

class QueryResult
{
public:
    QueryResult() = default;
    QueryResult(std::shared_ptr<std::vector<std::string>> text_, std::shared_ptr<std::set<std::vector<std::string>::size_type>> line_, std::string word_)
        : line(line_), text(text_), word(word_) {}
    QueryResult(StrBlob s_, std::shared_ptr<std::set<std::vector<std::string>::size_type>> line_, std::string word_)
        : line(line_), str_blob(s_), word(word_) {}
    void print(std::ostream &out) const;

private:
    std::shared_ptr<std::set<std::vector<std::string>::size_type>> line; // 行号
    std::shared_ptr<std::vector<std::string>> text;                      // 对应的字符串
    StrBlob str_blob;                                                    // 用于存储文本行
    std::string word;                                                    // 单词
};
#endif // QUERYRESULT_H