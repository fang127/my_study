#include <iostream>

using namespace std;

int main()
{
    unsigned int ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch, prech = '\0';
    cout << "请输入一段文本：" << endl;
    while (cin >> ch && ch != 'Q')
    {
        if (prech == 'f')
        {
            switch (ch)
            {
            case 'f':
                ++ffCnt;
                break;
            case 'l':
                ++flCnt;
                break;
            case 'i':
                ++fiCnt;
                break;
            }
        }
        if ((prech == ' ' || prech == '\n') && ch == 'Q')
            break;
        prech = ch;
    }
    cout << "ff 的数量是：" << ffCnt << endl;
    cout << "fl 的数量是：" << flCnt << endl;
    cout << "fi 的数量是：" << fiCnt << endl;

    return 0;
}
