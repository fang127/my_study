#include <iostream>

class Y; // 前向说明

class X
{
    Y *ptr_to_Y = nullptr;
};

class Y
{
    X x;
};

int main()
{
    return 0;
}