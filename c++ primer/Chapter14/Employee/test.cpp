#include <iostream>
#include <string>
#include "Employee.h"

int main()
{
    // std::string name(1000, 'L');
    Employee e01{std::string(1000, 'L'), "经理", 10000, 2};
    std::cout << "移动前 e01.name 对象地址: " << &(e01.name) << std::endl;
    std::cout << "移动前 e01.name 内部数据地址: " << (void *)e01.name.data() << std::endl;
    std::cout << "移动前 e01.name 内容: " << e01.name << std::endl;

    Employee e03 = std::move(e01);
    std::cout << "移动后 e03.name 对象地址: " << &(e03.name) << std::endl;
    std::cout << "移动后 e03.name 内部数据地址: " << (void *)e03.name.data() << std::endl;
    std::cout << "移动后 e01.name 对象地址: " << &(e01.name) << std::endl;
    std::cout << "移动后 e01.name 内部数据地址: " << (void *)e01.name.data() << std::endl;
    std::cout << "移动后 e03.name 内容: " << e03.name << std::endl;
    std::cout << "移动后 e01.name 内容: " << e01.name << std::endl;

    return 0;
}