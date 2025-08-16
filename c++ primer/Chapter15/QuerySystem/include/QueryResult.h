#ifndef QUERYRESULT_H
#define QUERYRESULT_H

#include <iostream>
#include <memory>
#include <set>
#include <vector>

class QueryResult
{
public:
    QueryResult() = default;
    QueryResult(std::shared_ptr<std::vector<std::string>> text_, std::shared_ptr<std::set<std::vector<std::string>::size_type>> line_, std::string word_)
        : line(line_), text(text_), word(word_) {}
    void print(std::ostream &out) const;
    std::shared_ptr<std::vector<std::string>> get_files() const { return this->text; }
    std::set<std::vector<std::string>::size_type>::iterator begin() const { return line->begin(); }
    std::set<std::vector<std::string>::size_type>::iterator end() const { return line->end(); }

private:
    std::shared_ptr<std::set<std::vector<std::string>::size_type>> line; // 行号
    std::shared_ptr<std::vector<std::string>> text;                      // 对应的字符串
    std::string word;                                                    // 单词
};
#endif // QUERYRESULT_H