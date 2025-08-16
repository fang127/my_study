#include <iostream>
#include <string>

int main()
{
    std::string name{"hello"};
    for (auto it = name.begin(); it != name.end(); ++it)
    {
        std::cout << *it << " " << typeid(*it).name() << std::endl;
    }
    return 0;
}