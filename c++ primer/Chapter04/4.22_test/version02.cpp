#include <iostream>
#include <string>

using namespace std;

int main()
{
    string finalgrade;
    int grade;
    cout << "请输入您要检查的成绩：" << endl;
    // 确保输入的成绩合法
    while (cin >> grade && grade >= 0 && grade <= 100)
    {
        // 使用 if 语句实现
        if (grade > 90)
            finalgrade = "high pass";
        else if (grade > 75)
            finalgrade = "pass";
        else if (grade > 60)
            finalgrade = "low pass";
        else
            finalgrade = "fail";
        cout << "该成绩所处的档次是：" << finalgrade << endl;
        cout << "请输入您要检查的成绩：" << endl;
    }

    cout << finalgrade << endl;

    return 0;
}
