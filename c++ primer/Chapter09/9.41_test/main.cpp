#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<char> vec = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!'};
    std::string str(vec.begin(), vec.end());
    std::cout << "String created from vector: " << str << std::endl;
    return 0;
}