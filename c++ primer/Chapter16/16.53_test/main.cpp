#include <iostream>
#include <string>

template <typename T>
std::ostream &print(std::ostream &os, const T &s)
{
    return os << s;
}

template <typename T, typename... Args>
std::ostream &print(std::ostream &os, const T &t, const Args &...rest)
{
    os << t << ", ";
    return print(os, rest...);
}

int main()
{
    std::string s1 = "hello", s2("world");
    int i = 42;
    print(std::cout, s1, s2, i);
    std::cout << std::endl;

    print(std::cout, "C++", 17, 3.14, "is fun!");
    std::cout << std::endl;

    print(std::cout, "Single argument");
    std::cout << std::endl;

    return 0;
}