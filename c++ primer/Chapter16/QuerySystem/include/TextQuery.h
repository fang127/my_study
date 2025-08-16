#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <vector>
#include <map>
#include <string>
#include <set>
#include <memory>
#include <algorithm>
#include <stdexcept>
#include <fstream>
#include <sstream>
#include "StrBlob.h"
class QueryResult;

class TextQuery
{
    friend class QueryResult;

public:
    TextQuery() = default;
    TextQuery(std::ifstream &input_file);
    QueryResult query(const std::string &word) const;

private:
    std::shared_ptr<std::vector<std::string>> text;
    std::map<std::string, std::shared_ptr<std::set<std::vector<std::string>::size_type>>> word_to_line;
    StrBlob str_blob; // 用于存储文本行
};

std::string &format_word(std::string &word);

#endif // TEXTQUERY_H