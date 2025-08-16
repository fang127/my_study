#include "Employee.h"

// Static member initialization
int Employee::num = 0;

// Default constructor
Employee &Employee::operator=(const Employee other)
{
    this->name = other.name;
    this->id = num++;
    return *this;
}
