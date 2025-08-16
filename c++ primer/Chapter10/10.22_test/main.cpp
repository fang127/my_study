#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
using namespace std::placeholders;

bool my_adjust(std::string word, std::string::size_type min_length)
{
    return word.size() <= min_length;
}
int main()
{
    std::vector<std::string> words{
        "Hello", "world", "this", "is", "a", "test", "C++", " 17 ", " standard ", " library "};
    int num = std::count_if(words.begin(), words.end(), std::bind(my_adjust, _1, 6));

    std::cout << "Number of words longer than 6 characters: " << num << std::endl;

    return 0;
}