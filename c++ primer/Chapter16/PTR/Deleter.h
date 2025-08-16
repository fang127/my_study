#ifndef DELETER_H
#define DELETER_H

#include <iostream>

// function-object class that calls delete on a given pointer
class Deleter
{
public:
    Deleter(const std::string &s = "smart pointer", std::ostream &strm = std::cerr)
        : os(strm), type(s) {}

    // as with any function template, the type of T is deduced by the compiler
    template <typename T>
    void operator()(T *p) const
    {
        os << "deleting " << type << std::endl;

        delete p;
    }

private:
    std::ostream &os; // where to print debugging info
    std::string type; // what type of smart pointer we're deleting
};

#endif // DELETER_H