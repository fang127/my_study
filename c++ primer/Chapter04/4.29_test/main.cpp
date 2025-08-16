#include <iostream>

using namespace std;

int main()
{
    int x[10];
    int *p = x;
    cout << sizeof(x) << "\t" << sizeof(*x) << "\n";
    cout << sizeof(x) / sizeof(*x) << endl;
    cout << sizeof(p) << '\t' << sizeof(*p) << '\n';
    cout << sizeof(p) / sizeof(*p) << endl;

    return 0;
}
