#include "Chapter6.h"
#include <iostream>

int fact(int val)
{
    int num = 1;
    while (val > 1)
    {
        num *= val;
        --val;
    }
    return num;
}