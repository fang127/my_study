#include <iostream>
#include <map>
#include <list>
#include <fstream>
#include <string>
#include <sstream>

std::string &format_words(std::string &words)
{
    if (!words.empty())
    {
        for (std::string::size_type i = 0; i != words.size();)
        {
            if (isalpha(words[i]))
            {
                words[i] = tolower(words[i]);
                ++i;
            }
            else if (ispunct(words[i]))
                words.erase(i, 1);
            else
            {
                ++i;
                continue;
            }
        }
    }
    return words;
}

int main()
{
    std::ifstream file;
    std::string filename;
    std::cout << "Please enter filename and path : " << std::endl;
    std::cin >> filename;
    file.open(filename, std::ios_base::in);
    std::map<std::string, std::list<unsigned>> text;

    if (file.is_open())
    {
        std::string words;
        unsigned line = 0;
        while (std::getline(file, words))
        {
            ++line;
            std::stringstream temp(format_words(words));
            std::string word;
            while (temp >> word)
            {
                text[word].push_back(line);
            }
        }
    }
    else
    {
        std::cout << "Dont open file!!!" << std::endl;
    }

    for (const auto &i : text)
    {
        std::cout << i.first << "\t";
        for (const auto j : i.second)
        {
            std::cout << "line: " << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}