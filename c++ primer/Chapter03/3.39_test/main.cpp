#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    // string
    string str1, str2;
    cout << "请输入两个字符串：" << endl;
    cin >> str1 >> str2;

    if (str1 > str2)
        cout << "第一个字符串大于第二个字符串" << endl;
    else if (str1 < str2)
        cout << "第一个字符串小于第二个字符串" << endl;
    else
        cout << "两个字符串相等" << endl;

    // c风格字符串
    char ch1[80], ch2[80];
    cout << "请输入两个字符串：" << endl;
    cin >> ch1 >> ch2;
    int i = strcmp(ch1, ch2);
    if (i > 0)
        cout << "第一个字符串大于第二个字符串" << endl;
    else if (i < 0)
        cout << "第一个字符串小于第二个字符串" << endl;
    else
        cout << "两个字符串相等" << endl;
    return 0;
}
