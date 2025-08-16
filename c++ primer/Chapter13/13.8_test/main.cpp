#include <iostream>
#include <string>

class HasPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) {}

    HasPtr &operator=(const HasPtr &hp)
    {
        if (this != &hp)
        {
            auto temp = new std::string(*hp.ps);
            delete this->ps;
            this->ps = temp;
            // this->ps = hp.ps;
            this->i = hp.i;
        }
        return *this;
    }

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
    HasPtr hp03;

    hp01.print();
    hp02.print();
    hp03.print();
    hp03 = hp01; // Copy assignment operator is called here
    hp03.print();

    return 0;
}