#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str;
    vector<string> v;
    while (cin >> str)
        v.push_back(str);

    cout << "更改前的值：" << endl;
    for (auto i : v)
        cout << i;
    cout << endl;

    cout << "改变之后：" << endl;
    for (auto &x : v)
        for (auto &y : x)
            y = toupper(y);

    for (auto i : v)
        cout << i;
    cout << endl;

    return 0;
}