#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 99};
    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 88};
    int *p = a, *q = b;
    for (int i = 0; i != 10; ++i)
    {
        if (*(p + i) == *(q + i))
        {
        }
        else
        {
            cout << "a != b" << endl;
            break;
        }
    }
    vector<int> v1, v2;
    for (int i = 0; i < 10; ++i)
    {
        v1.push_back(i);
        v2.push_back(i);
    }
    if (v1 == v2)
    {
        cout << "v1 == v2" << endl;
    }
    else
    {
        cout << " v1 != v2" << endl;
    }
    return 0;
}