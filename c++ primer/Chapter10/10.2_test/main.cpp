#include <iostream>
#include <algorithm>
#include <list>
#include <string>

int main()
{
    std::cout << "Enter some strings: ";
    std::string word;
    std::list<std::string> vec;
    while (std::cin >> word)
        vec.push_back(word);
    std::cin.clear(); // Clear the input stream to avoid infinite loop
    std::cout << "Please enter a string to count its occurrences: ";
    std::string count_word;
    std::cin >> count_word;
    int num = count(vec.cbegin(), vec.cend(), count_word);
    std::cout << "The number " << count_word << " occurs " << num << " times." << std::endl;
    return 0;
}