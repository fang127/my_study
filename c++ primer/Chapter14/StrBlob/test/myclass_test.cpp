#include <iostream>
#include "StrBlob.h"
#include "StrBlobPtr.h"
#include "MyClass.hpp"

int main()
{
    StrBlob s{"Hello", "World!!!!!!!", "C++17...."};
    StrBlobPtr ptr(s);
    MyClass myClass(&ptr);

    std::cout << "Size of StrBlob: " << myClass->operator++()->size() << std::endl;

    return 0;
}