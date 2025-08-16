#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include <vector>
void find_word(std::ifstream &file, std::vector<std::string> &words)
{
    std::string word;
    std::string no_word{"bdfghjklpqty"};
    while (file >> word) // 读取文件中的每个单词
    {
        if (word.find_first_of(no_word) == std::string::npos) // 如果单词中不包含任何一个字母
        {
            words.push_back(word); // 将单词添加到结果列表中
        }
    }
}

std::string max_word_length(const std::vector<std::string> &words)
{
    std::vector<std::string>::size_type max_length = 0;
    std::string longest_word;
    for (const auto &word : words)
    {
        if (word.size() > max_length)
        {
            max_length = word.size();
            longest_word = word;
        }
    }
    return longest_word;
}

int main(int argc, char *argv[])
{
    if (argc <= 1)
    {
        throw std::runtime_error("No input file provided.");
    }
    std::vector<std::string> words;
    for (auto i = argv + 1; i != argv + argc; ++i) // 从argv[1]开始，跳过程序名
    {
        std::ifstream file(*i);
        if (!file)
        {
            std::cerr << "Error opening file: " << *i << std::endl;
            continue;
        }
        find_word(file, words);
    }
    if (words.empty())
    {
        std::cout << "No valid words found." << std::endl;
    }
    else
    {
        std::string longest_word = max_word_length(words);
        std::cout << "Longest word without 'bdfghjklpqty': " << longest_word << std::endl;
    }

    return 0;
}