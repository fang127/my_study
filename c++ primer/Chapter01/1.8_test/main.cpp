#include <iostream>

int main()
{
    std::cout << "/*"; // 正确 /*
    std::cout << "*/"; // 正确 */
    //std::cout << /*"*/"*/; // 错误
    std::cout << /*"*/"/*"/*"*/; // 正确 /*

    return 0;
}