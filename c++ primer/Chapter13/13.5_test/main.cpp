#include <iostream>
#include <string>

class HasPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) {}
    void print() const
    {
        std::cout << ps << "  " << &i << std::endl;
    }

private:
    std::string *ps;
    int i;
};

int main()
{
    HasPtr hp01("hello");
    HasPtr hp02(hp01); // Copy constructor is called here
    hp01.print();
    hp02.print();

    return 0;
}