#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main(int argc, char *argv[])
{
    std::vector<std::string> v;

    for (auto i = argv + 1; i != argv + argc; ++i)
    {
        std::ifstream file(*i);
        if (file)
        {
            std::string word;
            while (file >> word)
                v.push_back(word);
        }
    }

    for (auto i : v)
        std::cout << i << " ";
    std::cout << "\n";

    return 0;
}