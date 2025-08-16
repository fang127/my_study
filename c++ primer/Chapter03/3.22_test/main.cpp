#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string str;
    vector<string> text;
    cout << "请输入字符串：" << endl;
    while (cin >> str)
        text.push_back(str);
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
    {
        for (auto &i : *it)
        {
            i = toupper(i);
        }
        cout << *it << " ";
    }
    cout << flush;
    return 0;
}