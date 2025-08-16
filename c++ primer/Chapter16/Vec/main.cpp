#include <iostream>
#include "Vec.h"

int main()
{
    Vec<std::string> vec;
    vec.push_back("hello");
    vec.emplace_back(10, 'c');
    for (const auto &s : vec)
    {
        std::cout << s << std::endl;
    }

    return 0;
}