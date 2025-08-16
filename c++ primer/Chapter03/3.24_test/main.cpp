#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "请输入一组整数：" << endl;
    int i = 0;
    while (cin >> i)
        v.push_back(i);
    if (v.empty())
        cerr << "v为空，错误" << endl;

    cout << "v中的数据为：" << endl;
    for (auto i : v)
        cout << i << "  ";
    cout << endl;

    cout << "相邻两数之和为：" << endl;
    for (auto it = v.cbegin(); it != v.cend() - 1; ++it)
    {
        cout << *it + *(it + 1) << "  ";
    }
    cout << endl;

    cout << "对称位置之和为：" << endl;
    int j = 0;
    for (auto it = v.cbegin(); it != v.cend(); ++it, ++j)
    {
        vector<int>::difference_type dis = v.cend() - v.cbegin();
        cout << *it + *(v.cbegin() + dis - j - 1) << "  ";
    }
    cout << endl;

    return 0;
}