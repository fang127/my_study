#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

bool is_valid_word(const std::string &word)
{
    return word.size() >= 5;
}

int main()
{
    std::vector<std::string> words;
    std::cout << "Enter words (type 'exit' to stop):" << std::endl;
    std::string word;
    while (std::cin >> word && word != "exit")
    {
        words.push_back(word);
    }

    auto iter = std::partition(words.begin(), words.end(), is_valid_word);
    std::for_each(words.begin(), iter, [](const std::string &w)
                  { std::cout << w << " "; });

    return 0;
}