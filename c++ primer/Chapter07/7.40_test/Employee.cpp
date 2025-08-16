#include "Employee.h"

std::istream &read(std::istream &is, Employee &employee)
{
    is >> employee.name >> employee.office >> employee.id >> employee.salary;
    return is;
}