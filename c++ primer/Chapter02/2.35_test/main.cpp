#include <iostream>

int main()
{
    const int i = 42;           // const int
    auto j = i;                 // int
    const auto &k = i;          // const int
    auto *p = &i;               // const int *
    const auto j2 = i, &k2 = i; // const int  ,  const int

    std::cout << typeid(i).name() << std::endl;
    std::cout << typeid(j).name() << std::endl;
    std::cout << typeid(k).name() << std::endl;
    std::cout << typeid(p).name() << std::endl;
    std::cout << typeid(j2).name() << std::endl;
    std::cout << typeid(k2).name() << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha; // 接下来的输出把 bool 值显示成 true/false

    std::cout << "i and j have same type? "
              << std::is_same<decltype(i), decltype(j)>::value << std::endl;
    std::cout << "i and k have same type? "
              << std::is_same<decltype(i), decltype(k)>::value << std::endl;
    std::cout << "i and j2 have same type? "
              << std::is_same<decltype(i), decltype(j2)>::value << std::endl;
    std::cout << "j and j2 have same type? "
              << std::is_same<decltype(j), decltype(j2)>::value << std::endl;
    std::cout << "k and k2 have same type? "
              << std::is_same<decltype(k), decltype(k2)>::value << std::endl;

    return 0;
}