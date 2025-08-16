#include <iostream>
#include <string>

int main()
{
    std::string words, vowels("aeiou");
    int count = 0;
    while (std::cin >> words)
        for (auto i : words)
            if (vowels.find(i) != std::string::npos)
                ++count;
    std::cout << "Number of vowels: " << count << std::endl;
    return 0;
}