#pragma once
#include <iostream>
#include <string>
class Employee
{
    friend std::istream &read(std::istream &is, Employee &employee);

public:
    Employee() = default;
    Employee(std::string na, std::string off, double sa, int i) : name(na), office(off), salary(sa), id(i) {}
    Employee(std::istream &is) { read(is, *this); }

private:
    std::string name;
    std::string office;
    double salary = 0.0;
    int id = 0;
};

std::istream &read(std::istream &is, Employee &employee);