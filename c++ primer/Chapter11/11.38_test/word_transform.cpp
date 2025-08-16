#include <iostream>
#include <unordered_map>
#include <string>
#include <fstream>
#include <stdexcept>
#include <sstream>

std::unordered_map<std::string, std::string> buildMap(std::ifstream &rule)
{
    std::unordered_map<std::string, std::string> m;
    rule.open("rule.txt", std::ios_base::in);
    if (!rule.is_open())
    {
        throw std::runtime_error("Dont open rule.txt");
    }
    std::string key, value;
    while (rule >> key && std::getline(rule, value))
    {
        if (value.size() > 1)
        {
            m.insert({key, value.substr(1)});
        }
        else
        {
            throw std::runtime_error("no rule for " + value);
        }
    }
    rule.close();

    return m;
}

const std::string &tansform(std::string &word, const std::unordered_map<std::string, std::string> &m)
{
    auto iter = m.find(word);
    if (!word.empty() && iter != m.end())
    {
        word = iter->second;
    }
    return word;
}

void word_transform(std::ifstream &rule, std::ifstream &text)
{
    auto m = buildMap(rule);
    for (auto i : m)
        std::cout << i.first << " " << i.second << std::endl;
    text.open("text.txt", std::ios_base::in);
    if (!text.is_open())
    {
        throw std::runtime_error("Dont open text.txt");
    }
    std::string line;
    while (std::getline(text, line))
    {
        std::string word;
        std::stringstream s(line);
        while (s >> word)
        {
            std::cout << tansform(word, m) << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::ifstream rule, text;
    word_transform(rule, text);

    return 0;
}