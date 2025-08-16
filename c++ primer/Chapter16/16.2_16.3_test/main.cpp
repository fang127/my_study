#include <iostream>

template <typename T>
int compare(const T &a, const T &b)
{
    if (a < b)
    {
        return -1;
    }
    else if (b < a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

class Sales_Data
{
    int i = 0;
};

int main()
{
    int i = 42, j = 0;
    double d1 = 3.14, d2 = 2.72;

    std::cout << "Comparing integers: " << compare(i, j) << std::endl;
    std::cout << "Comparing doubles: " << compare(d1, d2) << std::endl;
    std::cout << "Comparing int and double: " << compare<int>(i, d1) << std::endl;
    // std::cout << "Comparing Sales_Data objects: " << compare(Sales_Data(), Sales_Data()) << std::endl;

    return 0;
}