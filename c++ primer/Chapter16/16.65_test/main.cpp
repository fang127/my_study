#include <iostream>
#include <string>
#include <sstream>

template <typename T>
std::string debug_rep(const T &str)
{
    std::ostringstream os;
    os << str;
    return os.str();
}

template <typename T>
std::string debug_rep(T *p)
{
    std::ostringstream os;
    os << "pointer: " << p;
    if (p)
    {
        os << " " << debug_rep(*p);
    }
    else
    {
        os << " null pointer";
    }
    return os.str();
}

template <>
std::string debug_rep(char *p)
{
    return debug_rep(std::string(p));
}

template <>
std::string debug_rep(const char *cp)
{
    return debug_rep(std::string(cp));
}

int main()
{
    int i = 42;
    int *p = &i;
    char c[] = "Hello, World!";
    std::cout << debug_rep(i) << std::endl;
    std::cout << debug_rep(p) << std::endl;
    std::cout << debug_rep("Hello, World!") << std::endl;
    std::cout << debug_rep(c) << std::endl;
    std::cout << debug_rep(nullptr) << std::endl; // 测试空

    return 0;
}