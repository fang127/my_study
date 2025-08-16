#include <iostream>
#include <initializer_list>

double sum(std::initializer_list<double> il)
{
    double total = 0.;
    for (auto it = il.begin(); it != il.end(); ++it)
    {
        total += *it;
    }
    return total;
}

int main()
{
    std::cout << "The sum of 1.0, 2.0, and 3.0 is: "
              << sum({1.0, 2.0, 3.0}) << std::endl;
    return 0;
}