#include <iostream>
#include <vector>

struct X
{
    X() { std::cout << "X()" << std::endl; }
    X(const X &x) { std::cout << "X(const X &x)" << std::endl; }
    X &operator=(const X &x)
    {
        std::cout << "operator=" << std::endl;
        return *this;
    }
    ~X() { std::cout << "~X()" << std::endl; }
};

X func(X x)
{
    std::cout << "func(X x)" << std::endl;
    return x;
}

void funcptr(X *x)
{
    std::cout << "func(X *x)" << std::endl;
}

X &funcRef(X &x)
{
    std::cout << "funcRef(X &x)" << std::endl;
    return x;
}

int main()
{
    std::vector<X> vec;
    std::cout << "*****************" << "\n";
    X x;
    std::cout << "*****************" << "\n";
    X y(x);
    std::cout << "*****************" << "\n";
    X z = x;
    std::cout << "*****************" << "\n";
    vec.push_back(x);
    std::cout << "*****************" << "\n";
    vec.push_back(x);
    std::cout << "*****************" << "\n";
    vec.insert(vec.begin(), x);
    std::cout << "*****************" << "\n";
    X y1 = func(x);
    std::cout << "*****************" << "\n";
    X z1 = funcRef(x);
    std::cout << "*****************" << "\n";

    X *ptr = new X();
    std::cout << "*****************" << "\n";
    funcptr(ptr);
    std::cout << "*****************" << "\n";
    delete ptr;
    std::cout << "*****************" << "\n";
    y = x;

    return 0;
}