#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    int num = 0;
    if (v1.begin() != v1.cend())
    {
        for (auto it = v1.cbegin(); it != v1.cend(); ++it)
        {
            cout << *it << " ";
            ++num;
        }
        cout << "v1的元素个数为：" << num << endl;
    }
    else
        cout << "v1为空" << endl;
    num = 0;
    if (v2.begin() != v2.cend())
    {
        for (auto it = v2.cbegin(); it != v2.cend(); ++it)
        {
            cout << *it << " ";
            ++num;
        }
        cout << "v2的元素个数为：" << num << endl;
    }
    else
        cout << "v2为空" << endl;
    num = 0;
    if (v3.begin() != v3.cend())
    {
        for (auto it = v3.cbegin(); it != v3.cend(); ++it)
        {
            cout << *it << " ";
            ++num;
        }
        cout << "v3的元素个数为：" << num << endl;
    }
    else
        cout << "v3为空" << endl;
    num = 0;
    if (v4.begin() != v4.cend())
    {
        for (auto it = v4.cbegin(); it != v4.cend(); ++it)
        {
            cout << *it << " ";
            ++num;
        }
        cout << "v4的元素个数为：" << num << endl;
    }
    else
        cout << "v4为空" << endl;
    num = 0;
    if (v5.begin() != v5.cend())
    {
        for (auto it = v5.cbegin(); it != v5.cend(); ++it)
        {
            cout << *it << " ";
            ++num;
        }
        cout << "v5的元素个数为：" << num << endl;
    }
    else
        cout << "v5为空" << endl;
    num = 0;
    if (v6.begin() != v6.cend())
    {
        for (auto it = v6.cbegin(); it != v6.cend(); ++it)
        {
            cout << *it << " ";
            ++num;
        }
        cout << "v6的元素个数为：" << num << endl;
    }
    else
        cout << "v6为空" << endl;
    num = 0;
    if (v7.begin() != v7.cend())
    {
        for (auto it = v7.cbegin(); it != v7.cend(); ++it)
        {
            cout << *it << " ";
            ++num;
        }
        cout << "v7的元素个数为：" << num << endl;
    }
    else
        cout << "v7为空" << endl;

    return 0;
}