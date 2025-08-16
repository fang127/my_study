#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
public:
    Employee();
    Employee(const std::string name_) : name(name_), id(num++) {}    // Constructor with name parameter
    Employee(const Employee &other) : name(other.name), id(num++) {} // Copy constructor
    Employee &operator=(const Employee other);                       // Assignment operator
    ~Employee() = default;                                           // Default destructor

private:
    static int num;
    std::string name;
    int id;
};

#endif // EMPLOYEE_H