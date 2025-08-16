#include <iostream>

class myClass
{
public:
    int operator()(bool status, int x, int y)
    {
        if (status)
        {
            return x;
        }
        else
        {
            return y;
        }
    }
};

int main()
{
    myClass mc;
    std::cout << mc(true, 1, 2) << std::endl;

    return 0;
}