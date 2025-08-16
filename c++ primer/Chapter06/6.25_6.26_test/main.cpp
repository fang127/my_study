#include <iostream>
#include <string>
int main(int argc, char *argv[])
{
    std::string words;
    for (size_t i = 0; i < argc; ++i)
    {
        words += argv[i];
        words += " ";
        std::cout << "Argument " << i << ": " << argv[i] << std::endl;
    }
    std::cout << "Concatenated arguments: " << words << std::endl;
    return 0;
}