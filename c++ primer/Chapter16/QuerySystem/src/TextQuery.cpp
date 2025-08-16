#include "TextQuery.h"
#include "QueryResult.h"

class DebugDelete
{
public:
    DebugDelete(std::ostream &os_ = std::cout) : os(os_) {}

    template <typename Pointer>
    void operator()(Pointer *ptr) const
    {
        this->os << "delete shared_ptr" << std::endl;
        delete ptr;
    }

private:
    std::ostream &os;
};

std::string &format_word(std::string &word)
{
    if (!word.empty())
    {
        for (std::string::size_type i = 0; i != word.size();)
        {
            if (isalpha(word[i]) && isupper(word[i]))
            {
                word[i] = tolower(word[i]);
                ++i;
            }
            else if (ispunct(word[i])) // 修复：应该是 word[i] 而不是 i
            {
                word.erase(i, 1);
                // 删除字符后不增加i，因为后面的字符会前移
            }
            else
                ++i; // 修复：添加递增以避免无限循环
        }
    }
    return word;
}

TextQuery::TextQuery(std::ifstream &input_file) : text(new std::vector<std::string>(), DebugDelete())
{
    if (!input_file.is_open())
        throw std::runtime_error("Dont open file");
    std::string line;
    std::vector<std::string>::size_type line_number = 0; // 行号，从0开始以匹配vector索引
    while (std::getline(input_file, line))
    {
        this->text->push_back(line);
        this->str_blob.push_back(line); // 将行添加到 StrBlob 中
        std::istringstream str(line);
        std::string word;
        while (str >> word)
        {
            word = format_word(word);
            // 修复：正确处理多行中出现的同一单词
            auto &line_set = this->word_to_line[word];
            if (!line_set)
            {
                line_set = std::make_shared<std::set<std::vector<std::string>::size_type>>();
            }
            line_set->insert(line_number);
        }
        ++line_number;
    }
}

QueryResult TextQuery::query(const std::string &word) const
{
    static std::shared_ptr<std::set<std::vector<std::string>::size_type>> p(new std::set<std::vector<std::string>::size_type>);
    auto iter = this->word_to_line.find(word);
    std::string::size_type size = 0;
    if (iter != this->word_to_line.end())
        return QueryResult(this->str_blob, iter->second, word);

    // return QueryResult(this->text, iter->second, word);
    else
        return QueryResult(this->str_blob, p, word);
    // return QueryResult(this->text, p, word);
}