#include <iostream>

int main()
{
    // a 先定义在使用
    int input_value = 0;
    std::cin >> input_value;

    // b 列表初始化窄化，导致信息丢失
    double i = {3.14};

    // c 错误
    double salary, wage;
    salary = wage = 9999.99;

    // d 不可重复定义
    int i2 = 3.14; // i2 = 3

    return 0;
}