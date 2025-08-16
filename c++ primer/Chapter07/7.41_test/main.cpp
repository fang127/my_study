#include "Sales_data.h"
#include <iostream>

int main()
{
    Sales_data book01;
    Sales_data book02("hello");
    Sales_data book03("hello", 1, 10);
    Sales_data book04(std::cin);
    return 0;
}