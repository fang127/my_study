#include <iostream>
#include <string>
#include <memory>

int main()
{
    int n = 10;
    // std::string *const p = new std::string[n];
    // std::string s;
    // std::string *q = p;
    // while (std::cin >> s && q != p + n)
    // {
    //     *q++ = s;
    // }
    // const size_t size = q - p;
    // while (q != p)
    // {
    //     std::cout << *(--q) << " ";
    // }
    // std::cout << std::endl;
    // std::cout << "Enter :" << size << " strings" << std::endl;
    // delete[] p;
    std::allocator<std::string> allo;
    auto const p = allo.allocate(n);
    auto q = p;
    std::string s;
    while (std::cin >> s && q != p + n)
        allo.construct(q++, s);
    std::size_t size = q - p;
    while (q != p)
    {
        std::cout << *(--q) << " ";
        allo.destroy(q);
    }
    std::cout << std::endl;
    allo.deallocate(p, n);
    std::cout << "Enter :" << size << " strings" << std::endl;

    return 0;
}