#include <iostream>
#include <sstream>
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

template <typename T>
std::string debug_rep(const T &t)
{
    std::ostringstream ret;
    ret << t;
    return ret.str();
}

template <typename... Args>
std::ostream &errorMsg(std::ostream &os, const Args &...rest)
{
    return print(os, debug_rep(rest)...);
}

int main()
{
    std::string s1 = "hello", s2("world");
    int i = 42;
    errorMsg(std::cout, s1, s2, i);
    std::cout << std::endl;

    errorMsg(std::cout, "C++", 17, 3.14, "is fun!");
    std::cout << std::endl;

    return 0;
}