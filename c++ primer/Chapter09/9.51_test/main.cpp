#include <iostream>
#include "Data.h"

int main()
{
    Data d01("Jan 1,1900");
    d01.print();
    Data d02("1/1/1900");
    d02.print();
    Data d03("Jan 1 1900");
    d03.print();

    return 0;
}