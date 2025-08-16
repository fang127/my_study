#include <iostream>
#include <vector>
#include <algorithm>

class MyEqual
{
public:
    bool operator()(double a) const
    {
        return a == this->b;
    }

private:
    double b = 3.0; // Example value to compare against
};

int main()
{
    std::vector<double> v = {1, 1, 2, 3, 2, 3, 4, 5, 6, 4, 6, 54, 3, 2, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::replace_if(v.begin(), v.end(), MyEqual(), 0.0);

    for (const auto &i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}