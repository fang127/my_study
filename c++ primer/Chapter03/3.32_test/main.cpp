#include <iostream>
using namespace std;
#include <vector>
int main()
{
    const int sz = 10; // 常量 sz 作为数组的维度
    int a[sz];
    // 通过 for 循环为数组元素赋值
    for (int i = 0; i < sz; i++)
        a[i] = i;
    // 通过范围 for 循环输出数组的全部元素
    cout << "a为:" << endl;
    for (auto val : a)
        cout << val << " ";
    cout << endl;

    int a1[sz];
    for (int i = 0; i < sz; ++i)
    {
        a1[i] = a[i];
    }
    cout << "a1为:" << endl;
    for (auto val : a1)
        cout << val << " ";
    cout << endl;

    vector<int> v1;
    for (int i = 0; i < 10; ++i)
    {
        v1.push_back(i);
    }
    cout << " v1:" << endl;
    for (auto i : v1)
        cout << i << " ";
    cout << endl;
    vector<int> v2(v1);
    cout << " v2:" << endl;
    for (auto i : v2)
        cout << i << " ";
    cout << endl;
    return 0;
}