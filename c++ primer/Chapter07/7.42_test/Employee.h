#pragma once
#include <iostream>
#include <string>
class Employee
{
    friend std::istream &read(std::istream &is, Employee &employee);

public:
    Employee() : Employee(" ", " ", 0, 0.0) { std::cout << "默认构造函数" << std::endl; };
    Employee(std::string na, std::string off, double sa, int i) : name(na), office(off), salary(sa), id(i) { std::cout << "被委托的构造函数" << std::endl; }
    Employee(std::istream &is) : Employee()
    {
        read(is, *this);
        std::cout << "istream构造函数" << std::endl;
    }

private:
    std::string name;
    std::string office;
    double salary = 0.0;
    int id = 0;
};

std::istream &read(std::istream &is, Employee &employee);