#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 99};
    int *p = a;
    for (int i = 0; i != 10; ++i)
    {
        *(p + i) = 0;
    }
    for (auto i : a)
        cout << i << " ";
    cout << endl;
    return 0;
}