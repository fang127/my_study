#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>

void format_word(std::string &word)
{
    if (!word.empty())
    {
        for (std::string::size_type i = 0; i != word.size();)
        {
            if (isalpha(word[i]))
            {
                word[i] = tolower(word[i]);
                ++i;
            }
            else if (ispunct(word[i]))
                word.erase(i, 1);
            else
            {
                ++i;
                continue;
            }
        }
    }
}

int main()
{
    std::unordered_map<std::string, size_t> words_map;
    std::string word;
    std::unordered_set<std::string> not_words_set{"the", "a", "an", "and", "or", "but", "is", "are", "was", "were", "be", "to", "of", "in", "that", "it"};
    while (std::cin >> word)
    {
        format_word(word);
        if (not_words_set.find(word) == not_words_set.end())
        {
            ++words_map[word];
        }
    }

    for (auto i : words_map)
        std::cout << i.first << " occurs " << i.second << " times." << "\n";
    std::cout << std::endl;

    return 0;
}