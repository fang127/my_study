#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
class Person
{
    // friend functions
    friend std::istream &read(std::istream &is, Person &person);
    friend std::ostream &print(std::ostream &os, const Person &person);

public:
    Person() = default;
    Person(const std::string &na, const std::string &add) : name(na), address(add) {}
    explicit Person(std::istream &is) { read(is, *this); };
    const std::string &get_name() const { return this->name; }
    const std::string &get_address() const { return this->address; }

private:
    std::string name;
    std::string address;
};

// No member functions
std::istream &read(std::istream &is, Person &person);
std::ostream &print(std::ostream &os, const Person &person);
#endif // PERSON_H