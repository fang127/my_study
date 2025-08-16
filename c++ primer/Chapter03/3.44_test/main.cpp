#include <iostream>
using namespace std;
using int_array = int[4];
int main()
{
    int ia[3][4];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            ia[i][j] = i * j;
        }
    }

    // 范围for
    for (int_array &p : ia)
        for (int q : p)
            cout << q << " ";
    cout << endl;
    cout << "*************************" << endl;
    // 普通for-指针
    for (int_array *p = ia; p != ia + 3; ++p)
        for (int *q = *p; q != *p + 4; ++q)
            cout << *q << " ";
    cout << endl;
    cout << "*************************" << endl;
    // 普通for-下标
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j)
            cout << ia[i][j] << " ";
    cout << endl;

    return 0;
}