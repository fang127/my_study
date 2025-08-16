#include <iostream>

class NoDefault
{
public:
    NoDefault(int i) : num(i) {}

private:
    int num;
};

class C
{
public:
    C(int i = 0) : node(i) { std::cout << "C创建成功" << std::endl; }

private:
    NoDefault node;
};

int main()
{
    C c(1);
    return 0;
}