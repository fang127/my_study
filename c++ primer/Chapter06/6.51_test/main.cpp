#include <iostream>
void f();
void f(int);
void f(int, int);
void f(double, double);
using namespace std;

int main()
{
    // f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);

    return 0;
}

void f()
{
    cout << "f()" << endl;
}

void f(int i)
{
    cout << "f(int)" << endl;
}

void f(int i, int j)
{
    cout << "f(int, int)" << endl;
}

void f(double d1, double d2 = 3.14)
{
    cout << "f(double, double)" << endl;
}
