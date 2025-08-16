#include "HasPtr.h"

// HasPtr &HasPtr::operator=(const HasPtr &hp)
// {
//     // Check for self-assignment
//     auto temp = new std::string(*hp.ps);
//     delete this->ps;
//     this->ps = temp;
//     // this->ps = hp.ps;
//     this->i = hp.i;

//     return *this;
// }

// Assignment operator for HasPtr
HasPtr &HasPtr::operator=(const HasPtr &hp)
{
    ++*hp.use_count;
    if (--*this->use_count == 0)
    {
        delete ps;
        delete use_count; // Clean up the old resources
    }
    this->ps = hp.ps;               // Share the pointer
    this->i = hp.i;                 // Copy the integer value
    this->use_count = hp.use_count; // Share the use_count pointer

    return *this;
}