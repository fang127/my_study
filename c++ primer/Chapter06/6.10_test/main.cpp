#include <iostream>

void my_swith(double *x, double *y)
{
    double temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    std::cout << "Enter two numbers: ";
    double a, b;
    std::cin >> a >> b;
    my_swith(&a, &b);
    std::cout << "After swapping: " << a << " " << b << std::endl;
    return 0;
}