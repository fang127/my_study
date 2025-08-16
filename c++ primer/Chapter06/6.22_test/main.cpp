#include <iostream>
#include <ctime>
void my_switch(int *num01, int *num02)
{
    for (int i = 0; i < 10; ++i)
    {
        int temp = num01[i];
        num01[i] = num02[i];
        num02[i] = temp;
    }
}

void print(const int *beg, const int *end)
{
    for (; beg != end; ++beg)
        std::cout << *beg << " ";
    std::cout << std::endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int a[10];
    for (auto &i : a)
        i = rand() % 100;
    int b[10];
    for (auto &i : b)
        i = rand() % 100;
    std::cout << "Array a: ";
    print(std::begin(a), std::end(a));
    std::cout << "Array b: ";
    print(std::begin(b), std::end(b));
    my_switch(a, b);
    std::cout << "After swapping:" << std::endl;
    std::cout << "Array a: ";
    print(std::begin(a), std::end(a));
    std::cout << "Array b: ";
    print(std::begin(b), std::end(b));
    return 0;
}