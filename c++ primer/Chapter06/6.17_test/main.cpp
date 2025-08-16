#include <iostream>
#include <string>

bool judge_words(const std::string &words)
{
    for (auto i : words)
    {
        if (isalpha(i) && !islower(i))
        {
            return false;
        }
    }
    return true;
}

void big_words(std::string &words)
{
    for (auto &i : words)
    {
        if (isalpha(i) && islower(i))
        {
            i = toupper(i);
        }
    }
}

int main()
{
    std::string words;
    std::cout << "Enter one or more words: ";
    std::getline(std::cin, words);
    bool result = judge_words(words);
    std::cout << "The words have " << (!result ? "word is upper" : "all lower") << std::endl;
    if (!result)
    {
        big_words(words);
        std::cout << "After changing: " << words << std::endl;
    }
    else
    {
        std::cout << "No change needed." << std::endl;
    }

    return 0;
}