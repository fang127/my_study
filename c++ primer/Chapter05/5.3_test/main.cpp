#include <iostream>
using std::cin, std::cout, std::endl;

int main()
{
    int sum = 0, val = 1;
    while (val <= 10)
        sum += val, ++val; // 使用连续的逗号运算符可以把多条语句合并为一条，这一点与块的作用类似。但是一般来说，直接使用块在程序的可读性上更有优势。
    cout << "The sum of the first 10 values is: " << sum << endl;

    return 0;
}