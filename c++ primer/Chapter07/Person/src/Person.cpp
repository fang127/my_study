#include "Person.h"

std::istream &read(std::istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}
std::ostream &print(std::ostream &os, const Person &person)
{
    os << "Name: " << person.name << ",Address: " << person.address;
    return os;
}