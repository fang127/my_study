#pragma once
#include <iostream>
#include <string>
class Employee
{
    friend std::istream &read(std::istream &is, Employee &employee);
    friend std::ostream &operator<<(std::ostream &os, const Employee &employee);

public:
    Employee() : Employee(" ", " ", 0, 0.0) { std::cout << "默认构造函数" << std::endl; };
    Employee(std::string na, std::string off, double sa, int i) : name(na), office(off), salary(sa), id(i) { std::cout << "被委托的构造函数" << std::endl; }
    Employee(std::istream &is) : Employee()
    {
        read(is, *this);
        std::cout << "istream构造函数" << std::endl;
    }
    Employee &operator=(const Employee &oth);              // 拷贝赋值运算符
    Employee &operator=(Employee &&oth) noexcept;          // 移动赋值运算符
    operator bool() const { return this->salary > 10000; } // 转换运算符
    Employee(const Employee &oth);                         // 拷贝构造函数
    Employee(Employee &&oth) noexcept;                     // 移动构造函数
    ~Employee() = default;

    // private:
    std::string name;
    std::string office;
    double salary = 0.0;
    int id = 0;
};

std::istream &read(std::istream &is, Employee &employee);

// 重载运算符
std::ostream &operator<<(std::ostream &os, const Employee &employee);
