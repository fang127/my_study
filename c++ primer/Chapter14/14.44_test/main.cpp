#include <iostream>
#include <functional>
#include <map>

double divide(double x, double y)
{
    return x / y;
}

auto multiply = [](double x, double y)
{
    return x * y;
};

class plus
{
public:
    double operator()(double x, double y) const
    {
        return x + y;
    }
};

double minus(double x, double y)
{
    return x - y;
}

int main()
{
    std::function<double(double, double)> f1 = divide;
    std::map<std::string, std::function<double(double, double)>> operators;
    operators.insert({"*", multiply});
    operators.insert({"+", plus()});
    operators.insert({"-", minus});
    operators.insert({"/", f1});
    std::cout << "Enter two numbers: ";
    double x, y;
    std::cin >> x >> y;
    std::cout << "Enter an operator (*, +, -, /): ";
    std::string op;
    std::cin >> op;
    auto it = operators.find(op);
    if (it != operators.end())
    {
        std::cout << "Result: " << it->second(x, y) << std::endl;
    }
    else
    {
        std::cout << "Unknown operator!" << std::endl;
    }

    return 0;
}