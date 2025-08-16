#include <iostream>
#include <memory>
#include <string>
#include <cstring>

int main()
{
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;
    char *ch = new char[word.length() + 1];
    strcpy(ch, word.c_str());

    std::cout << ch << std::endl;
    delete[] ch;
    return 0;
}