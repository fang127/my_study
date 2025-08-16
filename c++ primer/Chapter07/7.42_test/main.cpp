#include <iostream>
#include "Employee.h"

int main()
{
    Employee e01;
    std::cout << " **************** " << std::endl;
    Employee e02(std::cin);
    std::cout << " **************** " << std::endl;
    Employee e03("Jee", "经理", 10000, 000000001);

    return 0;
}