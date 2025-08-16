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
    for (decltype(v.size()) i = 0; i != v.size() - 1; ++i)
    {
        cout << v[i] + v[i + 1] << "  ";
    }
    cout << endl;

    cout << "对称位置之和为：" << endl;
    for (decltype(v.size()) i = 0; i != v.size(); ++i)
    {
        cout << v[i] + v[v.size() - 1 - i] << "  ";
    }
    cout << endl;

    return 0;
}