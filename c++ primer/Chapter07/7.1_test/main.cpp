#include <iostream>
#include "Sales_data.h"
using namespace std;

int main()
{
    cout << "请输入交易记录（ISBN、销售量、原价、实际售价）：" << endl;
    Sales_data total; // 保存当前求和结果的变量
    if (cin >> total)
    {                     // 读入第一笔交易记录
        Sales_data trans; // 保存下一条交易数据的变量
        while (cin >> trans)
        {                                     // 读入剩余的交易
            if (total.isbn() == trans.isbn()) // 检查 isbn
                total += trans;               // 更新变量 total 当前的值
            else
            {
                cout << total << endl; // 输出结果
                total = trans;         // 处理下一本
            }
        }
        cout << total << endl; // 输出最后一条交易
    }
    else
    {                                // 没有输入任何信息
        cerr << "No data?!" << endl; // 通知用户
        return -1;
    }
    return 0;
}
