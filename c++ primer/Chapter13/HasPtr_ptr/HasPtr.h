#ifndef HAS_PTR_H
#define HAS_PTR_H

#include <iostream>
#include <string>

class HasPtr
{

public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0), use_count(new std::size_t(1)) {}
    // HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) {}
    HasPtr(const HasPtr &hp) : ps(hp.ps), i(hp.i), use_count(hp.use_count) // share the use_count
    {
        ++*this->use_count;
    }

    ~HasPtr();                           // Destructor to clean up resources
    HasPtr &operator=(const HasPtr &hp); // Assignment operator

private:
    std::string *ps;
    int i;
    std::size_t *use_count;
};

inline HasPtr::~HasPtr()
{
    if (--*this->use_count == 0)
    {
        delete ps;
        delete use_count; // Clean up the resources
    }
}

#endif // HAS_PTR_H