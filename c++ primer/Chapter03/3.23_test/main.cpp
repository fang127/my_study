#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(10);
    for (int i = 0; i < 10; ++i)
    {
        int j = 0;
        cout << "请输入整数：" << endl;
        cin >> j;
        v[i] = j;
    }

    for (auto i : v)
        cout << i << " ";
    cout << endl;
    cout << "***************************" << endl;
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        *it *= 2;
    }

    for (auto i : v)
        cout << i << " ";
    cout << endl;

    return 0;
}