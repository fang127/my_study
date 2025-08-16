#include "Employee.h"

std::istream &read(std::istream &is, Employee &employee)
{
    is >> employee.name >> employee.office >> employee.id >> employee.salary;
    return is;
}

Employee &Employee::operator=(const Employee &oth) // 拷贝赋值运算符
{
    this->name = oth.name;
    this->office = oth.office;
    this->id = oth.id;
    this->salary = oth.salary;
    std::cout << "拷贝赋值运算符的调用" << std::endl;

    return *this;
}

Employee &Employee::operator=(Employee &&oth) noexcept // 移动赋值运算符
{
    this->name = std::move(oth.name);
    this->office = std::move(oth.office);
    this->id = oth.id;
    this->salary = oth.salary;
    std::cout << "移动赋值运算符的调用" << std::endl;

    return *this;
}

Employee::Employee(const Employee &oth) : name(oth.name), office(oth.office), id(oth.id), salary(oth.salary) // 拷贝构造函数
{
    std::cout << "拷贝构造函数的调用" << std::endl;
}

Employee::Employee(Employee &&oth) noexcept : name(std::move(oth.name)), office(std::move(oth.office)), id(oth.id), salary(oth.salary) // 移动构造函数
{
    std::cout << "移动构造函数的调用" << std::endl;
}

/*


非成员函数接口



*/
// 重载输出运算符
std::ostream &operator<<(std::ostream &os, const Employee &employee)
{
    os << "Name: " << employee.name << ", Office: " << employee.office
       << ", ID: " << employee.id << ", Salary: " << employee.salary;
    return os;
}