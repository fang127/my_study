#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec01{1, 2, 3, 4, 5};
    std::vector<int> vec02(vec01);
    if (vec01 == vec02)
    {
        std::cout << "vec01 and vec02 are equal." << std::endl;
    }
    else
    {
        std::cout << "vec01 and vec02 are not equal." << std::endl;
    }
    return 0;
}